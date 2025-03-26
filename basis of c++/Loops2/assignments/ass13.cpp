#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int i = 1;
  while (i <= n)
  {
    if (i % 5 == 0)
    {
      i++;
      continue;
    }
    if (sum + i > 300)
    {
      break;
    }
    sum = sum + i;
    i++;
  }
  cout << sum;
}
