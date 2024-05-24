#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter your name: ";
    getline(cin, a);
    cout << "Hello, " << a << "! Nice to meet you." << endl;
    return 0;
}