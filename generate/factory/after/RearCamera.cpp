#include "RearCamera.h"

RearCamera::RearCamera() {
    setPosition(CameraPosition::REAR);
    deactivateISP();
    setFPS(CameraFramerate::FPS_30);
}