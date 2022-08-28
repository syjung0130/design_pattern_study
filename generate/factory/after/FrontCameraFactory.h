#pragma once
#ifndef __FRONT_CAMERA_FACTORY_H__
#define __FRONT_CAMERA_FACTORY_H__

#include <string>
#include <iostream>
#include "Camera.h"
#include "CameraFactory.h"

class FrontCameraFactory : public CameraFactory {
public:
    virtual Camera* createCamera();
    virtual void onInitialized(Camera *camera, CameraPosition pos);
};

#endif