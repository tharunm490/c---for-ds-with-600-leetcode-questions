#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }
    if (i >= 2)
    {
      for (int k = 2; k <= i; k++)
      {
        cout << k << " ";
      }
    }

    cout << endl;
  }
}