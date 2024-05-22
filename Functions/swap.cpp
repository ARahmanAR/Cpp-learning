#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    // int temp = a;
    // a =b;
    // b = temp;
    cout << "Before swapping a = " << a << " and b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping a = " << a << " and b = " << b << endl;
    return 0;
}