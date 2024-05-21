#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    // 1st term = 1 and common difference = 2 , so the nth term = 1 + (n-1)*2 = 2n-1

    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << " ";
    }
}