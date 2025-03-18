#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float length, bredth;
  cin >> length >> bredth;
  float area = length * bredth;
  float permiter = 2 * (length + bredth);
  if (area > permiter)
  {
    cout << "the area of rectangle is greater than the permiter of a rectangle  " << endl;
  }
  else
  {
    cout << "perimeter of rectangle is greater than area" << endl;
  }
}