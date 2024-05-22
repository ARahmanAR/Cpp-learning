#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int y = 5;
    cout << &x << endl; // Address of x in memory 0x4d9e1ffb0c
    cout << &y << endl; // Address of y in memory 0x4d9e1ffb08
}