// Given a point (x, y), write a program to find out if it lies in the first, second, third or fourth quadrant, in the x-axis, y-axis or at the origin, viz .(0,0).

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter coordinates (x, y): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "The point lies in the first quadrant.\n";
    else if (x < 0 && y > 0)
        cout << "The point lies in the second quadrant.\n";
    else if (x < 0 && y < 0)
        cout << "The point lies in the third quadrant.\n";
    else if (x > 0 && y < 0)
        cout << "The point lies in the fourth quadrant.\n";
    else if (x == 0 && y != 0)
        cout << "The point lies on the y-axis.\n";
    else if (y == 0 && x != 0)
        cout << "The point lies on the x-axis.\n";
    else if (x == 0 && y == 0)
        cout << "The point lies at the origin.\n";

    return 0;
}
