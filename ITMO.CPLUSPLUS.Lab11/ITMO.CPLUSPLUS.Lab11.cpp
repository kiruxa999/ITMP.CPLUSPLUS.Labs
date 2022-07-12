// ITMO.CPLUSPLUS.Lab11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Time {
    /*friend Time operator+ (const Time&, const Time&);
    friend Time TimeInSec();*/
    friend Time operator+(const Time&, const int);
    friend Time operator+(const int, const Time&);
private:
    int hour;
    int minute;
    int second;
public:
    Time() {
        int hour = 0;
        int minute = 0;
        int second = 0;
    }

    Time(int hour, int minute, int second) {

        this->hour = hour + (minute + second / 60) / 60;
        this->minute = (minute + second / 60) % 60;
        this->second = second % 60;
        cout << hour << ':' << minute << ':' << second << endl;
    }

    string SeeTime() {
        cout << hour << ':' << minute << ':' << second << endl;
        return 0;
    }

    int TimeInSec() const {
        return hour * 3600 + minute * 60 + second;
    }

    //добавляем оператор
    /*Time operator+(const Time& time) const {
        Time summTime;
        int addInSeconds = TimeInSec() + time.TimeInSec();
        summTime.hour = addInSeconds / 3600;
        summTime.minute = (addInSeconds % 3600) / 60;
        summTime.second = addInSeconds % 60;
        return summTime;
    }*/
    Time operator-(const Time& time) const {
        Time summTime;
        int addInSeconds = TimeInSec() - time.TimeInSec();
        summTime.hour = addInSeconds / 3600;
        summTime.minute = (addInSeconds % 3600) / 60;
        summTime.second = addInSeconds % 60;
        return summTime;
    }
    int operator<(const Time& time) const {
        int addInSeconds = TimeInSec();
        int addInSeconds2 = TimeInSec() - time.TimeInSec();
        string s = "Переменная 1 меньше";
        if (addInSeconds < addInSeconds2) {
            
            cout << s;
            
        }
        else
        {
            cout << "Переменная 2 меньше";
            
        }
        return 0;
    }
    int operator>(const Time& time) const {
        int addInSeconds = TimeInSec();
        int addInSeconds2 = TimeInSec() - time.TimeInSec();
        if (addInSeconds > addInSeconds2) {
            cout << "Переменная 1 больше";
        }
        else
        {
            cout << "Переменная 2 больше";
        }
        return 0;
    }

    


    Time PlusTime(Time time) {
        Time summTime;
        int addInSeconds = TimeInSec() + time.TimeInSec();
        summTime.hour = addInSeconds / 3600;
        summTime.minute = (addInSeconds % 3600) / 60;
        summTime.second = addInSeconds % 60;
        return summTime;
    }

};

//операторы, сложения значения и Time
Time operator+(const Time& t1, const int t2) {
    Time summTime;
    int addInSeconds = t1.TimeInSec() + t2*3600;
    summTime.hour = addInSeconds / 3600;
    summTime.minute = (addInSeconds % 3600) / 60;
    summTime.second = addInSeconds % 60;
    return summTime;
}

Time operator+(const int t1, const Time& t2) {
    Time summTime;
    int addInSeconds = t1*3600 + t2.TimeInSec();
    summTime.hour = addInSeconds / 3600;
    summTime.minute = (addInSeconds % 3600) / 60;
    summTime.second = addInSeconds % 60;
    return summTime;
}


int main()
{
    Time t1(12, 12, 12);
    Time t2(2, 88, 48);
    
    //Time sumTime = t1 + t2;
    //Time sumTime = t1 - t2;
    //sumTime.SeeTime();
    
    if (t1 > t2) {
        cout << "Переменная 1 больше";
    }
    else
    {
        cout << "Переменная 1 меньше";
    }

    //Time time3 = t1 + 1;
    Time time3 = 1 + t1;
    time3.SeeTime();

    /*sumTime = t1.PlusTime(t2);
    cout << sumTime.SeeTime() << endl;*/


}
