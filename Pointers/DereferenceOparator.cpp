#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    int *p = &x;
    cout << x << endl;
    *p = 15;
    cout << x << endl;
    cout << *p << endl; // Dereference operator (*) is used to access the value at the address stored in the pointer. It is also called indirection operator.
    cout << p << endl;
}