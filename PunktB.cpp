#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double side1, side2, side3, Perimeter, Space;

    cout << "Введите 1-ю сторону (см): ";
    cin >> side1;
    cout << "Введите 2-ю сторону (см): ";
    cin >> side2;
    cout << "Введите 3-ю сторону (см): ";
    cin >> side3;

    // Проверка на существование треугольника
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1 && side1 > 0 && side2 > 0 && side3 > 0) {
        Perimeter = side1 + side2 + side3;
        double halfperimeter = Perimeter / 2;  // Полупериметр

        // Площадь по формуле Герона
        Space = sqrt(halfperimeter * (halfperimeter - side1) * (halfperimeter - side2) * (halfperimeter - side3));

        // Проверка на равнобедренный треугольник
        if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Треугольник равнобедренный." << endl;
        }
        else {
            cout << "Треугольник не равнобедренный." << endl;
        }

        // Проверка на равносторонний треугольник
        if (side1 == side2 && side1 == side3) {
            cout << "Треугольник равносторонний." << endl;
        }

        cout << "Результат:" << endl
            << "Периметр: " << Perimeter << " (см)" << endl
            << "Площадь: " << Space << " (см²)" << endl;
    }
    else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    return 0;
}