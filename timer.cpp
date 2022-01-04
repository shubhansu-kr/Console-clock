// timer

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int hours, mins, secs;

    cout << "            Set timer             " << endl;
    cout << "Enter hours : " << endl;
    cin >> hours;
    cout << "Enter minutes : " << endl;
    cin >> mins;
    cout << "Enter seconds : " << endl;
    cin >> secs;

    if (mins < 60 && secs < 60)
    {
        while (hours != 0 || mins != 0 || secs != 0)
        {
            system("cls");
            cout << hours << ":" << mins << ":" << secs << endl;
            if (secs == 0)
            {
                secs = 59;
                mins--;
            }
            if (mins == 0)
            {
                mins = 59;
                hours--;
            }
            secs--;
            Sleep(1000);
        }
        cout << "Time over " << endl;
    }
    else
    {
        cout << "Invalid output " << endl;
        cout << "Terminating " << endl;
    }
    return 0;
}