#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float radius;
  cin >> radius;
  float area = 3.14 * pow(radius, 2);
  float circumference = 2 * 3.14 * radius;
  if (area > circumference)
  {
    cout << "the area of the circle is bigger than the circumference" << area << endl;
  }
  else
  {
    cout << "circumference is greater" << circumference << endl;
  }
}