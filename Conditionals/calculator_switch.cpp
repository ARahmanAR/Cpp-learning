#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}