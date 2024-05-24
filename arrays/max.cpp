#include <iostream>
using namespace std;
int main()
{
    double arr[] = {12, 6, 734, 9, 28};
    double n = sizeof(arr) / 4;
    double mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout << mx << endl;
}
