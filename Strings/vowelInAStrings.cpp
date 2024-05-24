#include <iostream>
using namespace std;
int main()
{
    string s = "a lazy brown fox jumps over the dog";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    cout << count << endl;
}