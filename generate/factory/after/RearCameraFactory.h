#pragma once
#ifndef __REAR_CAMERA_FACTORY_H__
#define __REAR_CAMERA_FACTORY_H__

#include <string>
#include <iostream>
#include "CameraFactory.h"
#include "Camera.h"

class RearCameraFactory : public CameraFactory {
public:
    virtual Camera* createCamera();
    virtual void onInitialized(Camera* caera, CameraPosition pos);
};

#endif
