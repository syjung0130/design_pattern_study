#pragma once

#ifndef _CAMERA_H_
#define _CAMERA_H_

#include<string>
#include "camera_properties.h"

class Camera
{
public:
    Camera();
    int getPosition();
    void setPosition(enum class CameraPosition pos);
    int getFPS();
    void setFPS(enum class CameraFramerate fps);
    void activateISP(void);
    void deactivateISP(void);
    bool isISPActivated(void);

    std::string getPrintString();
    std::string getPositionPrintString();
    std::string getFPSPrintString();

private:
    enum class CameraPosition pos;
    enum class CameraFramerate fps;
    bool isISPOn = false;
};
#endif