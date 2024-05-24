#include <iostream>
using namespace std;
void print(int x, int n)
{
    if (x > n)
        return;
    cout << x << endl; // work
    print(x + 1, n);   // recursive call
    return;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(1, n);
}