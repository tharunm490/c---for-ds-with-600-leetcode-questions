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
      cout << " ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 1; i <= n - 1; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      cout << " ";
    }
    for (int j = 0; j <= (n - 1) - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
