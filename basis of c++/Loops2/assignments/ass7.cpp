#include <iostream>
using namespace std;
int main()
{
  unsigned long long fac = 1;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    fac = fac * i;
    cout << fac << endl;
  }
}