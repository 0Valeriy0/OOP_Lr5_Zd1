#pragma once
#include "Trans.h"
class Garage
{
private:
    string name;
    static const int MAX = 10;
    Trans* transports[MAX];   // лише вказівники, без володіння
    int count;
public:
	Garage();
	void init();
	void Show();
	void addTrans(Trans* trans);
	void deleteTrans(int index);
	void searchTrans(const string& plateInfo);
};

