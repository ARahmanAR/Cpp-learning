#include <iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{01, 81}, {02, 75}, {03, 72}, {04, 90}};
    int mx = INT_MIN;
    for (int i = 0; i < 4; i++) // 4 rows
    {
        for (int j = 0; j < 2; j++) // 2 columns
        {
            mx = max(mx, arr[i][j]);
        }
        }
    cout << mx << endl;
}