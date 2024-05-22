#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter side of triangle: ";
    cin >> m;
    for (int i = 1; i <= m; i++) // rows
    {
        for (int j = 1; j <= m - i; j++) // spaces
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) // stars
        {
            cout << "* ";
        }
        cout << endl;
    }
}