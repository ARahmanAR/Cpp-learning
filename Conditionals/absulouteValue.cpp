#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "The absolute value of " << n << " is " << -n;
    }
    else
    {
        cout << "The absolute value of " << n << " is " << n;
    }
}