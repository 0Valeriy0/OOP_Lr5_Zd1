#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine() {
    power = 0.0;
    volume = 0.0;
}
void Engine::init() {
	cout << "Введіть потужність двигуна (к.с.): ";
	cin >> power;
	cout << "Введіть об'єм двигуна (л): ";
	cin >> volume;
}
void Engine::Show() {
	cout << "Потужність двигуна: " << power << " к.с." << endl;
	cout << "Об'єм двигуна: " << volume << " л" << endl;
}
double Engine::getPower() {
	return power;
}
double Engine::getVolume() {
	return volume;
}