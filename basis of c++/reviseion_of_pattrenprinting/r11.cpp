#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << " * ";
    }
    for (int k = 1; k <= n - i; k++)
    {
      cout << "   ";
    }
    cout << " * ";
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      cout << " * ";
    }
    for (int k = n - 1; k > n - i; k--)
    {
      cout << "   ";
    }
    cout << " * ";
    cout << endl;
  }
}
