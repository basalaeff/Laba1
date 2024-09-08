#include <iostream>
#include "windows.h"

using namespace std;

double calculateCircleLength(double pi, double radius) {
    return 2 * pi * radius;
}

double calculateCircleArea(double pi, double radius) {
    return pi * radius * radius;
}

double calculateCircularSector(double pi, double radius, double angle) {
    return (pi * radius * radius * angle) / 360;
}

void circle() {
    double pi = 3.14;
    cout << "Введите радиус: ";
    double radius = 0;
    cin >> radius;
    double CircleLength = calculateCircleLength(pi, radius);
    cout << "Длина окружности: " << CircleLength << endl;
    double CircleArea = calculateCircleArea(pi, radius);
    cout << "Площадь круга: " << CircleArea << endl;
    cout << "Введите угол для подсчета площади кругового сектора: ";
    double angle;
    cin >> angle;
    double CircularSector = calculateCircularSector(pi, radius, angle);
    cout << "Площадь кругового сектора: " << CircularSector << endl;
}

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
            circle();
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

