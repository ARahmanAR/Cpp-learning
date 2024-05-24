#include <iostream>

using namespace std;

int main()
{
    cout << "\tMay 2024\n\n";
    cout << "\tSun\tMon\tTue\tWed\tThu\tFri\tSat\n";
    cout << "\t---------------------------------------------------\n";

    int i, day_start = 4, day = 0;
    for (i = 1; i <= 30 + day_start; i++)
    {
        if (i < day_start)
            cout << "\t";
        else
        {
            day++;
            cout << "\t" << day;
            if (i % 7 == 0)
                cout << endl;
        }
    }

    cout << endl;
    return 0;
}
