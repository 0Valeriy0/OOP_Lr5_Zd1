#pragma once
#include "Trans.h"
class Driver
{
private:
	string name;
	int experience;
	Trans* vehicle; // лише вказівник, без володіння
public:
	Driver();
	void init();
	void Show();
	Trans* getVehicle();
};

