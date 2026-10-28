#include "Driver.h"
#include <iostream>
using namespace std;

Driver::Driver() {
	name = "";
	experience = 0;
	vehicle = nullptr;
}
void Driver::init() {
	cout << "Введіть ім'я водія: ";
	cin >> name;
	cout << "Введіть досвід водія (роки): ";
	cin >> experience;
}
void Driver::Show() {
	cout << "Ім'я водія: " << name << endl;
	cout << "Досвід водія: " << experience << " років" << endl;
	if (vehicle != nullptr) {
		cout << "Транспортний засіб водія:" << endl;
		vehicle->Show();
	}
	else {
		cout << "Водій не має транспортного засобу." << endl;
	}
}
