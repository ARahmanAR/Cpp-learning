#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter side of square: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}