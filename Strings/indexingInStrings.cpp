#include <iostream>
using namespace std;
int main()
{
    string s = "Abdur Rahman";
    // cout << s[6] << endl; // R
    cout << s << endl; // Abdur Rahman
    s[6] = 'r';
    cout << s << endl; // Abdur rahman
}