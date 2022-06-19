// ITMO.CPLUSPLUS.Ex2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    system("chcp 1251");
	cout << "Введите значение периметра ";
	double p;
	cin >> p; // ввод с клавиатуры значения p
	cout << "Введите стороны треугольника ";
	double a;
	double b, c;
	cout << "\nВведите a, b, c:\n";
	cin >> a; // ввод с клавиатуры значения a
	cin >> b; // ввод с клавиатуры значения b
	cin >> c; // ввод с клавиатуры значения c
	double s = sqrt (p * (p - a)*(p - b)*(p - c));
	cout << "\nS = " << s << endl; //вывод результата на экран
	return 0;
}
