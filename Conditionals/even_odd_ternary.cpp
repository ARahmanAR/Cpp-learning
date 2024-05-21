#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    //(condition) ? true statement : false statement; (ternary operator
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}