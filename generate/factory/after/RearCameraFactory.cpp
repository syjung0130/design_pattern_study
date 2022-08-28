#include <iostream>
#include <string>
#include "RearCameraFactory.h"
#include "RearCamera.h"

using namespace std;

Camera* RearCameraFactory::createCamera() {
	return new RearCamera();
}

void RearCameraFactory::onInitialized(Camera *camera, CameraPosition pos) {
	string prompt = camera->getPositionPrintString() + string(" 다 만들었습니다.");

	cout << prompt << endl;
}