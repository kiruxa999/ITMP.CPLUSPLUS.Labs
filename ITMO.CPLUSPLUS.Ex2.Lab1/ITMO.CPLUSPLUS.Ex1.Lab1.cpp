// ITMO.CPLUSPLUS.Ex2.Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	system("chcp 1251");
	cout << "Ввод координат X1 и Y1 ";
	double x1;
	double y1;
	cout << "\nВведите X1 и Y1:\n";
	cin >> x1; // ввод с клавиатуры значения x
	cin >> y1; // ввод с клавиатуры значения y
	//
	cout << "Ввод координат X2 и Y2 ";
	double x2;
	double y2;
	cout << "\nВведите X2 и Y2:\n";
	cin >> x2; // ввод с клавиатуры значения x
	cin >> y2; // ввод с клавиатуры значения y
	//
	cout << "Ввод координат X3 и Y3 ";
	double x3;
	double y3;
	cout << "\nВведите X3 и Y3:\n";
	cin >> x3; // ввод с клавиатуры значения x
	cin >> y3; // ввод с клавиатуры значения y
	//
	cout << "Ввод координат X4 и Y4 ";
	double x4;
	double y4;
	cout << "\nВведите X4 и Y4:\n";
	cin >> x4; // ввод с клавиатуры значения x
	cin >> y4; // ввод с клавиатуры значения y
	//
	cout << "Ввод координат X5 и Y5 ";
	double x5;
	double y5;
	cout << "\nВведите X5 и Y5:\n";
	cin >> x5; // ввод с клавиатуры значения x
	cin >> y5; // ввод с клавиатуры значения y

	double s = abs(0.5 * (x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - x2*y1 - x3*y2 - x4*y3 - x5*y4 - x1*y5));
	cout << "\nS = " << s << endl; //вывод результата на экран
	return 0;
}

