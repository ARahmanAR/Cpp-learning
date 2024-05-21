#include <iostream>
using namespace std;
int main()
{
    int x = 3, y, z, m, n;
    y = x = 10;
    z = x <= 10;
    m = x == 10;
    n = x < 10;
    cout << x << " " << y << " " << z << " " << m << " " << n << endl;
}