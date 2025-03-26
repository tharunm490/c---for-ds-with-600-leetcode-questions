#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int rem;
  int sum = 0;
  while (n > 0)
  {
    rem = n % 10;
    if (rem % 2 == 0)
    {
      sum = sum + rem;
    }
    n = n / 10;
  }
  cout << sum;
}