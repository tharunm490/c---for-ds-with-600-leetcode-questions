#include <iostream>
using namespace std;
int main()
{
  //  for (int i = 1; i <= 4; i++)
  //   {
  //     for (int j = 4; j >= i; j--)
  //     {
  //       cout << " * ";
  //     }
  //     cout << endl;
  //     or
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 1 - i; j++)
    {
      cout << " * ";
    }
    cout << endl;
  }
}
