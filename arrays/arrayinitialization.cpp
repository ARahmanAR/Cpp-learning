#include <iostream>
using namespace std;
int main()
{
    // 5 integers -> 6,2,8,5,0
    int arr[5] = {1, 2, 3, 4, 5}; // array declaration and initialization
    arr[2] = 10;                  // changing the value of 3rd element
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}