#include <iostream>
using namespace std;
int main()
{
  int a = 3, n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << a << " ";
    a *= 4;
  }
}