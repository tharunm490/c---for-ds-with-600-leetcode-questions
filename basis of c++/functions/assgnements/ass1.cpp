#include <iostream>
#include <cmath>
using namespace std;
int sq(int x)
{
  int s = 0;
  for (int i = 1; i <= x; i++)
  {
    s = s + pow(i, 2);
  }
  return s;
}
int main()
{
  int n;
  cin >> n;
  cout << " the square of " << n << "  natural number is " << sq(n);
}