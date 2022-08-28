#include "FrontCamera.h"

FrontCamera::FrontCamera() {
    setPosition(CameraPosition::FRONT);
    activateISP();
    setFPS(CameraFramerate::FPS_30);
}