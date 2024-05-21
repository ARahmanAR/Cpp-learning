#include <iostream>
using namespace std;
int main()
{
    double cp, sp;
    cout << "Enter the cost price: ";
    cin >> cp;
    cout << "Enter the selling price: ";
    cin >> sp;
    if (cp > sp)
    {
        cout << "Loss: " << cp - sp;
    }
    else if (cp < sp)
    {
        cout << "Profit: " << sp - cp;
    }
    else
    {
        cout << "No Profit No Loss";
    }
}