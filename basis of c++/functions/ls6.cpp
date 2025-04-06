#include <iostream>
using namespace std;
void swaping(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
  cout << x << "  " << y << endl;
  // swap(x, y);
  // cout << x << " " << y;
}
int main()
{
  swaping(4, 3);
}