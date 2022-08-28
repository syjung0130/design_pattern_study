#include <iostream>
#include <string>
#include "Camera.h"
#include "CameraFactory.h"
#include "FrontCameraFactory.h"
#include "RearCameraFactory.h"

using namespace std;

int main()
{
	cout << "facotry method, after applying polymorphism: " << endl;
	FrontCameraFactory* fcf = new FrontCameraFactory();
	RearCameraFactory* rcf = new RearCameraFactory();

	Camera* frontCamera = fcf->createCamera();
	Camera* rearCamera = rcf->createCamera();

	std::cout << frontCamera->getPrintString() << endl;
	std::cout << rearCamera->getPrintString() << endl;


	return 0;
}