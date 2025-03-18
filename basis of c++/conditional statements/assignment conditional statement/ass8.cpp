#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  float m1 = (y2 - y1) / (x2 - x1);
  float m2 = (y3 - y2) / (x3 - x2);
  float m3 = (y3 - y1) / (x3 - x1);
  if (m1 == m2 && m2 == m3 && m3 == m1)
  {
    cout << " all the three points lies in a same line and they are colliner" << endl;
  }
  else
  {
    cout << " they not lie in a same line" << endl;
  }
}