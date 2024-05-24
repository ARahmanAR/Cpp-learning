#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s = "Abdur";

    cout << s << endl;

    reverse(s.begin(), s.end());
    cout << s << endl; // rudbA
}