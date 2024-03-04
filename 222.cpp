#include <iostream>
#include <cstdio>
using namespace std;
class clock;
class clock
{
public:
    int hour;
    int minute;
    int second;
    void settime(int h, int m, int s);
    void showtime();
};
void clock::settime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
void clock::showtime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
    class clock myclock;
    myclock.settime(8, 30, 30);
    myclock.showtime();
    return 0;
}