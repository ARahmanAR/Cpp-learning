#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the marks of the student: ";
  cin >> n;
  if (n >= 81 and n <= 100)
  {
    cout << "Very Good";
  }
  else if (n >= 61)
  {
    cout << "Good";
  }
  else if (n >= 41)
  {
    cout << "Average";
  }
  else
  {
    cout << "Fail";
  }
}
