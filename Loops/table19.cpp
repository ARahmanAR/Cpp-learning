#include <iostream>
using namespace std;

int main()
{
    // // 172 times
    // for (int i =19; i<=190;i++){
    // if (i%19==0) cout<<i<<"";
    //}

    // 10 times
    // for (int i = 19; i <= 190; i+=19)
    // {
    //     cout << i << " ";
    // }

    // HW

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    // run a loop from 1 to 10
    // print the multiplication table
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}