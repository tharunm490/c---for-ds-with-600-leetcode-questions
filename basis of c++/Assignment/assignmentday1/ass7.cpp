#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number that lies between 65 and 90: " << endl;
  cin >> a;
  cout << "The ASCII value of " << a << " is " << char(a) << endl;
}