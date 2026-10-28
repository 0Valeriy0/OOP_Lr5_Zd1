#pragma once
#include <iostream>
using namespace std;

class Engine
{
private:
	double power;   // к.с.
	double volume;  // л
public:
	Engine();
	double getPower();
	double getVolume();
	void init();
	void Show();

};

