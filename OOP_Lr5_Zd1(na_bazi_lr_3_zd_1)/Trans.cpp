#include "Trans.h"
#include "iomanip"
#include "regex"
void Trans::init() {
	cout << "Введіть марку транспортного засобу: ";
	cin >> marka;
	cout << "Введіть номер транспортного засобу: ";
	cin >> plateInfo;

	while (!regex_match(plateInfo, regex("^[A-Z]{2}[0-9]{4}[A-Z]{2}$"))) {
		cout << "Невірний формат номеру. Введіть ще раз: ";
		cin >> plateInfo;
	}

	cout << "Введіть швидкість транспортного засобу: ";
	cin >> speed;
	cout << "Введіть вмістимість транспортного засобу: ";
	cin >> capacity;
}
void Trans::Show() {
	cout << "|" << setw(16) << type
		<< "|" << setw(16) << marka
		<< "|" << setw(16) << plateInfo
		<< "|" << setw(16) << speed
		<< "|" << setw(16) << capacity
		<< "|" << setw(18) << "-"
		<< "|" << endl;

	cout << "+----------------+----------------+----------------+----------------+----------------+------------------+" << endl;

}
double Trans::getCapacity() {
	return capacity;
}
void shapka()
{
	cout << "+----------------+----------------+----------------+----------------+----------------+------------------+" << endl;

	cout << "|" << setw(16) << "Тип"
		<< "|" << setw(16) << "Марка"
		<< "|" << setw(16) << "Номер"
		<< "|" << setw(16) << "Швидкість"
		<< "|" << setw(16) << "Вантажопідйом."
		<< "|" << setw(18) << "Додатково"
		<< "|" << endl;

	cout << "+----------------+----------------+----------------+----------------+----------------+------------------+" << endl;
}
void menu() {
	cout << "+------------------------------------------+" << endl;
	cout << "| 1 - Легковий автомобіль                  |" << endl;
	cout << "| 2 - Мотоцикл                             |" << endl;
	cout << "| 3 - Вантажівка                           |" << endl;
	cout << "| 4 - Виведення усіх транспортних засобів  |" << endl;
	cout << "| 5 - Видалення транспортного запису       |" << endl;
	cout << "| 6 - Пошук за вантажопідйомністю          |" << endl;
	cout << "| 0 - Вихід                                |" << endl;
	cout << "+------------------------------------------+" << endl;
}

string Trans::getPlateInfo() {
	return plateInfo;
}
void deleteTrans(Trans* transports[], int& count)
{
	string plate;

	cout << "Введіть номерний знак для видалення: ";
	cin >> plate;

	for (int i = 0; i < count; i++)
	{
		if (transports[i]->getPlateInfo() == plate)
		{
			delete transports[i];

			for (int j = i; j < count - 1; j++)
			{
				transports[j] = transports[j + 1];
			}

			count--;

			cout << "Транспорт успішно видалено!" << endl;
			return;
		}
	}

	cout << "Транспорт з таким номерним знаком не знайдено!" << endl;
}
void searchTrans(Trans* transports[], int count)
{
	double capacity;

	cout << "Введіть мінімальну вантажопідйомність: ";
	cin >> capacity;

	bool found = false;

	for (int i = 0; i < count; i++)
	{
		if (transports[i]->getCapacity() >= capacity)
		{
			if (!found)
			{
				shapka();
				found = true;
			}

			transports[i]->Show();
		}
	}

	if (!found)
	{
		cout << "Транспортних засобів з такою вантажопідйомністю не знайдено." << endl;
	}
}





/*

while (plateInfo.length() != 8 ||
	   plateInfo[0] < 'A' || plateInfo[0] > 'Z' ||
	   plateInfo[1] < 'A' || plateInfo[1] > 'Z' ||
	   plateInfo[2] < '0' || plateInfo[2] > '9' ||
	   plateInfo[3] < '0' || plateInfo[3] > '9' ||
	   plateInfo[4] < '0' || plateInfo[4] > '9' ||
	   plateInfo[5] < '0' || plateInfo[5] > '9' ||
	   plateInfo[6] < 'A' || plateInfo[6] > 'Z' ||
	   plateInfo[7] < 'A' || plateInfo[7] > 'Z')
{
	cout << "Невірний формат номеру. Введіть ще раз: ";
	cin >> plateInfo;
}


*/