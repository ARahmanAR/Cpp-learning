#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    int nCr = fact(n) / (fact(r) * fact(n - r));
    cout << "The value of " << n << "C" << r << " is " << nCr << endl;
    return 0;
}