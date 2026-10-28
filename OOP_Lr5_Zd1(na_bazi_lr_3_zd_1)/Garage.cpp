#include "Garage.h"
#include "Trans.h"
#include <iostream>

using namespace std;

Garage::Garage() {
	name = "Гараж";
	count = 0;
}

void Garage::init() {
	cout << "Введіть назву гаража: ";
	cin >> name;
}
void Garage::Show() {
	cout << "Назва гаража: " << name << endl;
	cout << "Кількість транспортних засобів: " << count << endl;
	for (int i = 0; i < count; i++) {
		cout << "Транспортний засіб #" << (i + 1) << ":" << endl;
		transports[i]->Show();
	}
}
void Garage::addTrans(Trans* trans) {
	if (count < MAX) {
		transports[count] = trans;
		count++;
	}
	else {
		cout << "Гараж заповнений. Неможливо додати новий транспортний засіб." << endl;
	}
}
void Garage::deleteTrans(int index) {
	if (index >= 0 && index < count) {
		for (int i = index; i < count - 1; i++) {
			transports[i] = transports[i + 1];
		}
		count--;
	}
	else {
		cout << "Невірний індекс. Неможливо видалити транспортний засіб." << endl;
	}
}
void Garage::searchTrans(const string& plateInfo) {
	bool found = false;
	for (int i = 0; i < count; i++) {
		if (transports[i]->getPlateInfo() == plateInfo) {
			cout << "Транспортний засіб знайдено:" << endl;
			transports[i]->Show();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Транспортний засіб з номером " << plateInfo << " не знайдено." << endl;
	}
}