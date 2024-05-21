#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even number."; // Added a space here
        cout << " Wow!";
    }
    else
    {
        cout << n << " is odd number."; // Added a space here
        cout << " Great!";
    }

    return 0;
}
