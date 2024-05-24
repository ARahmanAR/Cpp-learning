#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 6, 734, 9, 28};
    int n = sizeof(arr) / 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum << endl;
    // long long z = 5;
    // cout << sizeof(z) << endl;
}