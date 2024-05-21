#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if ((n % 5 == 0 or n % 3 == 0) && (n % 15 != 0))
    {
        cout << n << " is divisible by 3 or 5 but not both.But not by 15.";
    }
    else
    {
        cout << n << " is not divisible by 3 or 5.But by 15.";
    }
}