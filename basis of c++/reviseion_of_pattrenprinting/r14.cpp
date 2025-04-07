#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << " * " << " ";
    if (i >= 2 && i != n)
    {
      for (int j = 1; j <= i - 2; j++)
      {
        cout << "   " << " ";
      }
      cout << " * " << " ";
    }
    cout << endl;
    if (i == n)
    {
      for (int l = 1; l <= n; l++)
      {
        cout << " * " << " ";
      }
    }
  }
}