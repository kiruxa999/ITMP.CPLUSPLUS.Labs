// ITMO.CPLUSCPLUS.Ex3.Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;

int storona(int x1, int y1, int x2, int y2)
{
	int a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return a;
}


int geron (int p, int a, int b, int c )
{
	int s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main()
{
	system("chcp 1251");
	
	cout << "\nВычисляем пятиугольник" << endl;

	cout << "\nВычисляем площадь первого треугольника:" << endl;
	int x1, y1, x2, y2;

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int AB = storona(x1, y1, x2, y2);

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int AC = storona(x1, y1, x2, y2);

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int BC = storona(x1, y1, x2, y2);
	
	cout << "Введите значение периметра первого треугольника";
	int p1;
	cin >> p1;

	int S1 = geron(p1, AB, AC, BC);
	cout << "\nПлощадь первого треугольника:" << S1 << endl;

	cout << "\nВычисляем площадь второго треугольника: \n" << endl;

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int CD = storona(x1, y1, x2, y2);

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int BD = storona(x1, y1, x2, y2);

	cout << "Введите значение периметра второго треугольника";
	int p2;
	cin >> p2;
	int S2 = geron(p2, BC, CD, BD);
	cout << "\nПлощадь второго треугольника:" << S2 << endl;

	cout << "\nВычисляем площадь третьего треугольника: \n" << endl;

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int BE = storona(x1, y1, x2, y2);

	cout << "\nВведите х1 \n" << endl;
	cin >> x1;
	cout << "\nВведите y1 \n" << endl;
	cin >> y1;
	cout << "\nВведите x2 \n" << endl;
	cin >> x2;
	cout << "\nВведите y2 \n" << endl;
	cin >> y2;
	int ED = storona(x1, y1, x2, y2);

	cout << "Введите значение периметра третьего треугольника";
	int p3;
	cin >> p3;
	int S3 = geron(p3, BD, BE, ED);
	cout << "\nПлощадь третьего треугольника:" << S3 << endl;

	cout << "\nПлощадь многоугольника будет равна: " << S1+S2+S3 << endl;
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
