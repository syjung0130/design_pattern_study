#pragma once
#include <string>
#include "Camera.h"
#include "camera_properties.h"

class CameraFactory {
public:
    static Camera* orderShip(CameraPosition pos, CameraFramerate fps);
    static void prepareFor();
    static void onInitialized(Camera *camera, CameraPosition pos);
};
