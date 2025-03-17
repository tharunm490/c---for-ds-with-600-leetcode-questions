#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a = 10, b = 5, c = a += b -= 2;
  cout << a << " " << b << " " << c; // 13 3 3
}