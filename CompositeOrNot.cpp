#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true; // true means prime
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // false means composite

            break;
        }
    }
    if (flag == true)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is a composite number";
    }
}
