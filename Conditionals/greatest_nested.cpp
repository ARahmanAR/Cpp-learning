#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;
    // a>b and b>c -> a>c -> a is greatest
    if (a > b)
    {
        // b can never be the greatest
        if (a > c)
        {
            cout << a << " is the greatest number.";
        }
        else
        {
            cout << c << " is the greatest number.";
        }
    }
    else
    {
        // b>a
        if (b > c)
        {
            cout << b << " is the greatest number.";
        }
        else
        {
            // c >b, c>b>a
            cout << c << " is the greatest number.";
        }
    }
}
