#pragma once
#include "Trans.h"
class Car : public Trans {
public:
	void init() override;
	double getCapacity();
};