// ITMO.CPLUSCPLUS.Ex5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int Srednee(double a, double b) {
    int c = 0;
    cout << a / b << endl;
    return c;
}


int SumMasOtric(int* b, int n) {
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < 0) {
        s += b[i];
        
        }
    
    }
    return s;
}


int SumMasPoloz(int* b, int n) {
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > 0) {
            s += b[i];
            
        }
        
    }
    return s;
}

int SumMasChetIndex(int* b, int n) {
    double s = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        s += b[i];
        //if (i % 2 == 0) {
        //}

    }
    return s;
}

int SumMasNeChetIndex(int* b, int n) {
    double s = 0;
    for (int i = 1; i < n; i = i + 2)
    {
        s += b[i];
        

    }
    return s;
}


int main()
{
    const int n = 10;
    int mas[n];

    //С помощью цикла for реализуйте заполнение массива с клавиатуры :
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }

    cout << s << endl;

    cout << Srednee(s, n) << endl;
    cout << SumMasOtric(mas, n) << endl;
    cout << SumMasPoloz(mas, n) << endl;
    cout << SumMasChetIndex(mas, n) << endl;
    cout << SumMasNeChetIndex(mas, n) << endl;
    
    

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
