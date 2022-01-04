// digital clock --> displays time for 60 sec

#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{

    int timer = 0;

    while (timer != 60)
    {
        system("cls");
        time_t current_time;
        current_time = time(NULL);
        tm *tm_local = localtime(&current_time);
        cout << "Current time is : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec << endl;
        Sleep(1000);
        timer++;
    }

    return 0;
}