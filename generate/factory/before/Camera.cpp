#include "Camera.h"
#include <string>


using namespace std;

Camera::Camera()
    :pos(CameraPosition::FRONT),
     fps(CameraFramerate::FPS_30) {
}

int Camera::getPosition()
{
    return static_cast<int>(pos);
}

void Camera::setPosition(enum class CameraPosition pos)
{
    this->pos = pos;
}

int Camera::getFPS()
{
    return static_cast<int>(this->fps);
}

void Camera::setFPS(enum class CameraFramerate fps)
{
    this->fps = fps;
}

void Camera::activateISP(void)
{
    this->isISPOn = true;
}
void Camera::deactivateISP(void)
{
    this->isISPOn = false;
}
bool Camera::isISPActivated(void)
{
    return this->isISPOn;
}

std::string Camera::getPositionPrintString()
{
    std::string res;

    switch (pos) {
        case CameraPosition::FRONT:
            res = std::string("front_camera");
            break;
        case CameraPosition::REAR:
            res = std::string("rear_camera");
            break;
        default:
            res = "invalid camera position";
            break;
    }

    return res;
}

std::string Camera::getFPSPrintString()
{
    std::string res;

    switch (fps) {
        case CameraFramerate::FPS_15:
            res = "fps_15";
            break;
        case CameraFramerate::FPS_30:
            res = "fps_30";
            break;
        case CameraFramerate::FPS_60:
            res = "fps_60";
            break;
        default:
            res = "invalid fps";
            break;
    }

    return res;
}

std::string Camera::getPrintString()
{

    return std::string("Camera{") +
        std::string("position=\'") + getPositionPrintString() + "\'" +
        std::string(", fps=\'") + getFPSPrintString() + "\'" +
        std::string(" }");
}
