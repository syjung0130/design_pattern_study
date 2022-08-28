#pragma once

#include <string>
#include <iostream>
#include "Camera.h"

class CameraFactory {
public:
    Camera* orderCamera(CameraPosition pos, CameraFramerate fps);

private:
    void prepareFor();

protected:
    virtual void onInitialized(Camera *camera, CameraPosition pos) = 0;
    virtual Camera* createCamera() = 0;
};