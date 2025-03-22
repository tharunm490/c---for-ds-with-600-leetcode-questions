#include <iostream>
using namespace std;
int main()
{
  double fac = 1;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    fac = fac * i;
  }
  cout << " the factorial of " << n << " is " << fac << endl;
}