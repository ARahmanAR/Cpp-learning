#include <iostream>
using namespace std;
void change(int arr[])
{
    arr[0] = 4;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr);
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
}