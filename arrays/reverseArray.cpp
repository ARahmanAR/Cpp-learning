#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / 4;

    for (int i = 0; i < n; i++)
    {

        cout << arr1[n - i - 1] << " ";
    }
}