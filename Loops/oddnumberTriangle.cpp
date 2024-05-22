#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter side of square: ";
    cin >> m;

    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << 2 * j - 1 << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
}