#include <iostream>
#include <string>
#include "Camera.h"
#include "FrontCameraFactory.h"
#include "FrontCamera.h"

using namespace std;

Camera* FrontCameraFactory::createCamera() {
	return new FrontCamera();
}

void FrontCameraFactory::onInitialized(Camera *camera, CameraPosition pos) {
	string prompt = camera->getPositionPrintString() + string(" 다 만들었습니다.");

	cout << prompt << endl;
}
