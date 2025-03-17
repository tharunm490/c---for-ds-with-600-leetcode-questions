#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a = 10, b = 6, c = 15;
  bool result = a < b && b < c || c == 10;
  cout << result; // output :0
}