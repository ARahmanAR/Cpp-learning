#include <iostream>
using namespace std;
int main()
{
    string s = "Abdur";
    // cout << s << endl;        // Abdur
    // cout << s.size() << endl; // 5
    // s.push_back('a');
    // cout << s << endl; // Abdura
    // s.pop_back();
    // cout << s << endl; // Abdu
    // s.append(" Rahman");
    // cout << s << endl;        // Abdur Rahman
    // cout << s.size() << endl; // 12
    cout << s << " " << s.length() << endl; // Abdur
    s.clear();
    cout << s << " " << s.length() << endl; // ""
}