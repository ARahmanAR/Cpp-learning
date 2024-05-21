#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n >= 100 and n <= 999)
    {
        cout << "The number is a three digit number.";
    }
    else
    {
        cout << "The number is not a three digit number.";
    }
    return 0;
}