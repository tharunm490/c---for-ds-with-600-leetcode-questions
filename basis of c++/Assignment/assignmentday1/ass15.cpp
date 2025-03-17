#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int y = (n * (n + 1) * (2 * n + 1)) / 6;
  cout << "The sum of squares of the first " << n << " natural numbers is: " << y;
}