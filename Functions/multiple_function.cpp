#include <iostream>
using namespace std;

void usa()
{
    cout << "You are in USA" << endl;
    cout << "How are you?" << endl;
    return;
}

void bangladesh()
{
    cout << "You are in Bangladesh" << endl;
    cout << "How are you?" << endl;
    usa();
    return;
}
int main()
{
    bangladesh();
    cout << endl;
}