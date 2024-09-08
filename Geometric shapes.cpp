#include <iostream>
#include "windows.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    while (true) {
        cout << "\tMENU\t\n\n";
        cout << "Геометрические фигуры" << endl;
        cout << "1 - окружность" << endl;
        cout << "2 - треугольник" << endl;
        cout << endl << "Введите номер фигуры: ";
        int shape = 0;
        cin >> shape;
        system("cls");
        switch (shape) {
        case 1:
            cout << "Окружность" << endl << endl;
            cout << "\tВнимание!\nВедуться технические работы\nПриносим извинения за временные неудобства\n\n";
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "Треугольник" << endl << endl;
            cout << "\tВнимание!\nВедуться технические работы\nПриносим извинения за временные неудобства\n\n";
            system("pause");
            system("cls");
            break;
        default:
            cout << " Фигура не выбрана! " << "\n";
            Sleep(1000);
            system("cls");
            break;
        }
    }
    return 0;
}

