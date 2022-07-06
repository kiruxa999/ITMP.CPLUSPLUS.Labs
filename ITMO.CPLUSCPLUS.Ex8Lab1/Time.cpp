#include <iostream> 
#include <string>
using namespace std;

class Time {
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

    Time PlusTime(Time time) {
        Time summTime;
        int addInSeconds = TimeInSec() + time.TimeInSec();
        summTime.hour = addInSeconds / 3600;
        summTime.minute = (addInSeconds % 3600) / 60;
        summTime.second = addInSeconds % 60;
        return summTime;
    }

private:
    int hour;
    int minute;
    int second;
};

int main()
{
    Time t1(12, 12, 12);
    Time t2(2, 88, 48);
    Time sumTime;
    sumTime = t1.PlusTime(t2);
    cout << sumTime.SeeTime() << endl;
}