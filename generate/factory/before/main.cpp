#include <iostream>
#include <string>
#include "Camera.h"
#include "CameraFactory.h"
#include "camera_properties.h"

using namespace std;

int main()
{
	cout << "facotry method, before: " << endl;
	//Ship* s = new Ship();
	Camera* frontCamera = CameraFactory::orderShip(CameraPosition::FRONT, CameraFramerate::FPS_30);
	cout << frontCamera->getPrintString() << endl;

	Camera *rearCamera = CameraFactory::orderShip(CameraPosition::REAR, CameraFramerate::FPS_30);
	cout << rearCamera->getPrintString() << endl;

	return 0;
}