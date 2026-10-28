// OOP_LR3_Zd1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include "Trans.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Track.h"

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int n = 10;
    int count = 0;
    int choice;
    Trans* transports[n];

    menu();
    cin >> choice;

    while (choice != 0) {
        switch (choice) {
        case 1: {
            if (count >= n) {
                cout << "Досягнуто максимальну кількість транспортних засобів.\n";
                break;
            }
            transports[count] = new Car();
            transports[count]->init();
            count++;
            break;
        }
        case 2: {
            if (count >= n) {
                cout << "Досягнуто максимальну кількість транспортних засобів.\n";
                break;
            }
            transports[count] = new Motorcycle();
            transports[count]->init();
            count++;
            break;
        }
        case 3: {
            if (count >= n) {
                cout << "Досягнуто максимальну кількість транспортних засобів.\n";
                break;
            }
            transports[count] = new Track();
            transports[count]->init();
            count++;
            break;
        }
        case 4: {
            shapka();
            for (int i = 0; i < count; i++) {

                transports[i]->Show();
            }
            break;
        }
        case 5: {
            deleteTrans(transports, count);
            break;
        }
        case 6:
            searchTrans(transports, count);
            break;
        }



        menu();
        cin >> choice;
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
