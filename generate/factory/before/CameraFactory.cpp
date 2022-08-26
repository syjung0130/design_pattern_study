#include <iostream>
#include <string>
#include "Camera.h"
#include "CameraFactory.h"

using namespace std;

Camera* CameraFactory::orderShip(CameraPosition pos, CameraFramerate fps) {
    if (pos < CameraPosition::FRONT || pos > CameraPosition::REAR) {
        cout << "카메라 위치가 잘못되었습니다." << endl;
    }
    if (fps < CameraFramerate::FPS_15 || fps > CameraFramerate::FPS_60) {
        cout << "카메라 FPS가 잘못되었습니다." << endl;
    }

    prepareFor();

    Camera* camera = new Camera();
    camera->setPosition(pos);

    if (pos == CameraPosition::FRONT) {
        camera->activateISP();
    }
    else if (pos == CameraPosition::REAR) {
        camera->deactivateISP();
    }

    if (pos == CameraPosition::REAR) {
        if (fps != CameraFramerate::FPS_30) {
            cout << "invalid fps. rear cam use only fps30." << endl;
            camera->setFPS(CameraFramerate::FPS_30);
        }
        else {
            camera->setFPS(fps);
        }
    } else if (pos == CameraPosition::FRONT) {
        if (fps <= CameraFramerate::FPS_15) {
            cout << "Parking mode is not supported yet. So it will be set to fps30." << endl;
        }
        else {
            camera->setFPS(fps);
        }
    }

    return camera;
}

void CameraFactory::prepareFor(void) {
    cout << " 만들 준비 중" << endl;
}

void CameraFactory::onInitialized(Camera *camera, CameraPosition pos) {
    cout << "CameraFactory::sendEmailTo()" << endl;
    cout << camera->getPositionPrintString() << ": initializing completed." << endl;
}