#include <iostream>
#include <cmath>
using namespace std;
void ct(int n)
{
  int c = 0;
  int r;
  int s = 0;
  while (n != 0)
  {
    r = n % 10;
    s = s + pow(r, 2);
    n = n / 10;
    c++;
  }
  cout << " the number of digits in the number is " << c << endl;
  cout << "the sum of square of each digits is " << s << endl;
}
int main()
{
  int n;
  cin >> n;
  ct(n);
}