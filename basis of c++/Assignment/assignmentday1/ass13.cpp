#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  //  euclidean distance between two coordinates
  int x1, y1, x2, y2;
  cout << "Enter the coordinates of first point: " << endl;
  cin >> x1 >> y1;
  cout << "Enter the coordinates of second point: " << endl;
  cin >> x2 >> y2;
  cout << "The euclidean distance between the two points is: " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
}