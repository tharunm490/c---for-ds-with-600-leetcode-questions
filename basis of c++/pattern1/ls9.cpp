#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int mid;
  if (n % 2 == 0)
  {
    mid = n / 2;
  }
  else
  {
    mid = n / 2 + 1;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (mid == j || mid == i)
      {
        cout << " * ";
      }
      else
      {
        cout << "   ";
      }
    }
    cout << endl;
  }
}