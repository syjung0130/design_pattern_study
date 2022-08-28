#include <iostream>
#include <string>
#include "Camera.h"
#include "CameraFactory.h"

using namespace std;

Camera* CameraFactory::orderCamera(CameraPosition pos, CameraFramerate fps) {
    prepareFor();
    Camera* camera = createCamera();//다형성... 이 클래스를 상속받은 클래스 객체의 함수가 불림.
    onInitialized(camera, static_cast<CameraPosition>(camera->getPosition()));

    return camera;
}

void CameraFactory::prepareFor() {
    std::cout << " 만들 준비 중" << std::endl;
}
