#include <iostream>
using namespace std;
int main()
{
    // 5 integers -> 6,2,8,5,0
    int arr[5]; // array declaration
    // arr[0] = 6; // array initialization
    // arr[1] = 2;
    // arr[2] = 8;
    // arr[3] = 5;
    // arr[4] = 0;
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    arr[0] = 100; // updating the value of 1st element
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}