#include <iostream>
using namespace std;
int maxmimum(int x, int y, int z)
{
  int d = max(x, y);
  int c = max(z, d);
  return c;
}
int main()
{
  cout << maxmimum(2, 3, 7);
}