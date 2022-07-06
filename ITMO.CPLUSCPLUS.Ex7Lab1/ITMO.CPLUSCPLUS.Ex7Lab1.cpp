// ITMO.CPLUSCPLUS.Ex7Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;


struct Time
{
	int temp;
	int hour;
	int minute;
	int second;
};


Time SummTime(Time t1, Time t2)
{
	Time t;
	t.hour = t1.hour*3600 + t2.hour*3600;
	t.minute = t1.minute*60 + t2.minute*60;
	t.second = t1.second + t2.second;
	t.temp = t.hour + t.minute + t.second;
	return t;
}

void SeeTime (Time t)
{
	cout << t.temp << "\n";
}


Time InputTime()
{
	Time t;
	cout << "\nВведите количество часов: ";
	cin >> t.hour;
	cout << "\nВведите количество минут: ";
	cin >> t.minute;
	cout << "\nВведите количество секунд: ";
	cin >> t.second;
	return t;
}

int main()
{
	system("chcp 1251");
	Time t1 = InputTime();
	Time t2 = InputTime();
	Time t3 = SummTime(t1, t2);
	SeeTime(t3);
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
