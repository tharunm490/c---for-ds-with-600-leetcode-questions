#include <iostream>
#include <cmath>
using namespace std;
float sq(int x)
{
  float area = 3.14 * pow(x, 2);

  return area;
}
int main()
{
  int n;
  cin >> n;
  cout << " the area of circle of radius  " << n << "  is " << sq(n);
}