// ITMO.CPLUSPLUS.Ex11.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;


class Distance
{
    friend Distance operator- (const Distance&, const Distance&);
    friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
    
private:
    int feet;
    float inches;
    const float MTF;

public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
    { 
    
    }
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters; // перевод в футы
        feet = int(fltfeet); // число полных футов
        inches = 12 * (fltfeet - feet); // остаток - это дюймы
    }
    operator float() const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }
    
    //// конструктор по умолчанию
    //Distance() : feet(0), inches(0.0) { }
    //// конструктор с двумя параметрами
    //Distance(int ft, float in) : feet(ft), inches(in) { }
    void getdist()
    {
        cout << "\nВведите число футов : ";
        cin >> feet;
        cout << "\nВведите число дюймов : ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << "\'\n";
    }
    Distance operator+ (const Distance&) const;
};



Distance Distance::operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

Distance operator- (const Distance& d1, const Distance& d2)
{
    int f = d1.feet - d2.feet;
    float i = d1.inches - d2.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}



std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
    out << dist.feet << "\' - " << dist.inches << "\'\n";
    return out;
}





int main()
{
    system("chcp 1251");
    //Distance dist2, dist3, dist4;
    /*dist1.getdist();
    dist2.getdist();
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    cout << "\ndist1 = ";
    dist1.showdist();
    dist3 = dist1 - dist2;
    cout << "\ndist3 = " << dist3;
    cout << "\ndist1 = " << dist1;*/
    Distance dist1 = 2.35F;
    float mtrs;
    mtrs = static_cast<float>(dist1);
    mtrs = dist1;
    cout << "\ndist2 = " << dist1;
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
