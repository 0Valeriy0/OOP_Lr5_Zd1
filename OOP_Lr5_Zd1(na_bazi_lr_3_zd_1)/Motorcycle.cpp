#include "Motorcycle.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Motorcycle::init()
{
    type = "Мотоцикл";
    cout << "Введіть марку: ";
    cin >> marka;

    cout << "Введіть номер: ";
    cin >> plateInfo;

    cout << "Введіть швидкість: ";
    cin >> speed;

    cout << "Є коляска? (1 - так, 0 - ні): ";
    cin >> sidecar;
    if (sidecar == 1) {
        cout << "Введіть вантажопідйомність: ";
        cin >> capacity;
    }
    else capacity = 0;

}

void Motorcycle::Show()
{
    string additional;

    if (sidecar)
        additional = "Коляска: є";
    else
        additional = "Коляска: немає";

    cout << "|" << setw(16) << type
        << "|" << setw(16) << marka
        << "|" << setw(16) << plateInfo
        << "|" << setw(16) << speed
        << "|" << setw(16) << getCapacity()
        << "|" << setw(18) << additional
        << "|" << endl;

    cout << "+----------------+----------------+----------------+----------------+----------------+------------------+" << endl;
}

double Motorcycle::getCapacity()
{
    if (sidecar)
        return capacity;

    return 0;
}