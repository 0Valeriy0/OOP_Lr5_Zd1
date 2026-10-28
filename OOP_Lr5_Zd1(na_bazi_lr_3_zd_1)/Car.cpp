#include "Car.h"
#include <iostream>

void Car::init()
{
    type = "Легкова машина";

    cout << "Введіть марку: ";
    cin >> marka;

    cout << "Введіть номер: ";
    cin >> plateInfo;

    cout << "Введіть швидкість: ";
    cin >> speed;

    cout << "Введіть вантажопідйомність: ";
    cin >> capacity;
}
double Car::getCapacity()
{
    return capacity;
}