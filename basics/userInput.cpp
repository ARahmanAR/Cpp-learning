#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Enter a number: "; // << is the insertion operator
    cin >> x;                   // >> is the extraction operator
    cout << "The  squared of this number  is: " << x * x << endl;
}