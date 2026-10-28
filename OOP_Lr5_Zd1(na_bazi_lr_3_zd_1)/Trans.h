#pragma once
#include <iostream>
#include <string>

using namespace std;
class Trans {

protected:
	string type;
	string marka;
	string plateInfo;
	double speed;
	double capacity;
public:
	virtual void init();
	virtual void Show();
	double getCapacity();
	string getPlateInfo();
};
void menu();
void shapka();
void deleteTrans(Trans* transports[], int& count);
void searchTrans(Trans* transports[], int count);