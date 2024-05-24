// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4][2] = {{01, 81}, {02, 75}, {03, 72}, {04, 90}};
//     cout << "Roll No.  Marks" << endl;
//     for (int i = 0; i < 4; i++) // 4 rows
//     {
//         for (int j = 0; j < 2; j++) // 2 columns
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// for alignment of columns in output we use setw() function from iomanip library
#include <iostream>
#include <iomanip> // for setw()
using namespace std;

int main()
{
    int arr[4][2] = {{01, 81}, {02, 75}, {03, 72}, {04, 90}};
    cout << "Roll No.  Marks" << endl;
    for (int i = 0; i < 4; i++) // 4 rows
    {
        for (int j = 0; j < 2; j++) // 2 columns
        {
            cout << setw(8) << arr[i][j]; // setw(8) sets a width of 8 for each column
        }
        cout << endl;
    }
}
