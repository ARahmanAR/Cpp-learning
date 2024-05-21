#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of times you want to print:  ";
    cin >> n;
    for (int i = 050; i <= n; i++)
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
}
