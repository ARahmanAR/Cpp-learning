#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First side of a triangle: ";
    cin >> a;
    cout << "Enter the Second side of a triangle: ";
    cin >> b;
    cout << "Enter the Third side of a triangle: ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << "The sides form a triangle.";
    }
    else
    {
        cout << "The sides do not form a triangle.";
    }
    return 0;
}