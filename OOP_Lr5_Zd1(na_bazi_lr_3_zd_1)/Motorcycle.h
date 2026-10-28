#pragma once
#include "Trans.h"

class Motorcycle : public Trans {
private:
    bool sidecar;

public:
    void init() override;
    void Show() override;
    double getCapacity();


};