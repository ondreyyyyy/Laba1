#include <iostream>
#include <cmath>
using namespace std;
int main() { // Задание 1. Пункт а.
	setlocale(LC_ALL, "RU");
	
	double side_a, side_b;
	
	cout << "Введите сторону a (см): "; // Пользователь вводит данные для сторон
	cin >> side_a;
	
	if (side_a <= 0) { // Проверка введенных данны для стороны a
		cout << "Данные неверны. Введите другие" << endl;
		return 0;
	}
	
	cout << "Введите сторону b (см): ";
	cin >> side_b;
	
	if (side_b <= 0) { // Проверка введенных данных для стороны b
		cout << "Данные неверны. Введите другие" << endl;
		return 0;
	}
	
	// Вычисление параметров
	double perimeter = 2 * (side_a + side_b); // Подсчёт периметра
	double square = side_a * side_b; // Подсчёт площади
	double diagonal = sqrt(side_a * side_a + side_b * side_b); // Подсчёт диагонали
	
	
	// Вывод результата
	cout << "Результат: " << endl 
	<< "Периметр: " << perimeter << " (см)" << endl 
	<< "Площадь: " << square << " (см²)" << endl 
	<< "Диагональ: " << diagonal << " (см)" << endl;
	return 0;
}
