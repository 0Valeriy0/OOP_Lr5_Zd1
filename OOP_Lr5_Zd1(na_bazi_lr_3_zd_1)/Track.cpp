#include "Track.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Track::init()
{
    type = "Грузовик";

    cout << "Введіть марку: ";
    cin >> marka;

    cout << "Введіть номер: ";
    cin >> plateInfo;

    cout << "Введіть швидкість: ";
    cin >> speed;

    cout << "Введіть вантажопідйомність: ";
    cin >> capacity;

    cout << "Є причіп? (1 - так, 0 - ні): ";
    cin >> trailer;
}

void Track::Show()
{
    string additional;

    if (trailer)
        additional = "Причіп: є";
    else
        additional = "Причіп: немає";

    cout << "|" << setw(16) << type
        << "|" << setw(16) << marka
        << "|" << setw(16) << plateInfo
        << "|" << setw(16) << speed
        << "|" << setw(16) << getCapacity()
        << "|" << setw(18) << additional
        << "|" << endl;

    cout << "+----------------+----------------+----------------+----------------+----------------+------------------+" << endl;
}

double Track::getCapacity()
{
    if (trailer)
        return capacity * 2;

    return capacity;
}