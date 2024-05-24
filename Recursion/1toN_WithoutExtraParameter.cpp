#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0) // Base case
        return;
    print(n - 1);      // recursive call
    cout << n << endl; // work
    return;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(n);
}