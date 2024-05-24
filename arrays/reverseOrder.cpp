#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / 4;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[n - i - 1];
        cout << arr2[i] << " ";
    }
}