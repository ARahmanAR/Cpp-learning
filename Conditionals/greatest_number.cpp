#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First number: ";
    cin >> a;
    cout << "Enter the Second number: ";
    cin >> b;
    cout << "Enter the Third number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is the greatest number.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greatest number.";
    }
    else
    {
        cout << c << " is the greatest number.";
    }
    return 0;
}