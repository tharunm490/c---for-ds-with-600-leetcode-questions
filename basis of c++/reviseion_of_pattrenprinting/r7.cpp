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
    for (int j = 1; j <= i; j++)
    {
      cout << " * ";
    }

    cout << endl;
  }
  // or
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n + i - 1; j++)
  //   {
  //     if (j <= n - i)
  //       cout << " ";
  //     else
  //       cout << "* ";
  //   }
  //   cout << endl;
  // }
}