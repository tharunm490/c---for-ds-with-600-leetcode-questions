#include <iostream>
using namespace std;
int minimum(int x, int y)
{
  int z = min(x, y);
  return z;
}
int main()
{
  cout << min(2, 3);
}