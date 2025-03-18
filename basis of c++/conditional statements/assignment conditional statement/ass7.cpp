#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x == 0 && y != 0)
  {
    cout << "it lies in the y axis" << endl;
  }
  else if (y == 0 && x != 0)
  {
    cout << "it lies in the x axis" << endl;
  }
  else if (x == 0 && y == 0)
  {
    cout << " it lies in the orign " << endl;
  }
  else
  {
    cout << "It does not lie on any axis" << endl;
  }
}