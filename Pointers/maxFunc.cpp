#include <iostream>
using namespace std;
int maxOfTwo(int a, int b)
{
    // return a > b ? a : b;
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The maximum of the two numbers is: " << maxOfTwo(a, b) << endl;
    return 0;
}