// ITMO.CPLUSPLUS.Ex2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    system("chcp 1251");
    double x;
    double y;
    cout << "Введите Х\n";
    cin >> x;
    cout << "Введите У\n";
    cin >> y;
    if (x * x + y * y < 3 && y > 0)
        cout << "\nТочка внутри\n"; // "внутри"
    else if (x * x + y * y > 3 || y < 0)
        cout << "\nТочка снаружи\n";// "снаружи"
    else // "на границе"
        cout << "\nНа границе\n";
    return 0;
}
