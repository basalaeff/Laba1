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

// Функция для вычисления периметра треугольника
double calculatePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

// Функция для вычисления площади треугольника по формуле Герона
double calculateArea(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}

// Функция для проверки равнобедренного треугольника
bool checkIsoscelesTriangle(double side1, double side2, double side3) {
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        return true;
    }
    else {
        return false;
    }
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


void triangle() {
    double side1, side2, side3;

    cout << "Введите длину первой стороны треугольника: ";
    cin >> side1;

    cout << "Введите длину второй стороны треугольника: ";
    cin >> side2;

    cout << "Введите длину третьей стороны треугольника: ";
    cin >> side3;


    // Проверка на существование треугольника
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Вычисление периметра и площади треугольника
        double perimeter = calculatePerimeter(side1, side2, side3);
        double area = calculateArea(side1, side2, side3);

        cout << "Периметр треугольника: " << perimeter << endl;
        cout << "Площадь треугольника: " << area << endl;

        // Проверка на равнобедренный треугольник
        if (checkIsoscelesTriangle(side1, side2, side3)) {
            cout << "Треугольник является равнобедренным." << endl;
        }
        else {
            cout << "Треугольник не является равнобедренным." << endl;
        }
    }
    else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }
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
            triangle();
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


