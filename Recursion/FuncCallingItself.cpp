#include <iostream>
using namespace std;
void great()
{
    cout << "Hey" << endl;
    great();
    return;
}
int main()
{
    great();
}