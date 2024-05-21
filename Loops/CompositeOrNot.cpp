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
    if (n == 1)
    {
        cout << n << " is neither prime nor composite";
    }
    else if (flag == true) // if flag is true then it is a prime number
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is a composite number";
    }
}
