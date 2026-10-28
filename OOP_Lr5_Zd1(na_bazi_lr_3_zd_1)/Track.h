#pragma once
#include "Trans.h"

class Track : public Trans
{
private:
    bool trailer;

public:
    void init() override;
    void Show() override;
    double getCapacity();
};