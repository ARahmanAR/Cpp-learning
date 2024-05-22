#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "    ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << "      ";
        }
        cout << endl;
    }
}