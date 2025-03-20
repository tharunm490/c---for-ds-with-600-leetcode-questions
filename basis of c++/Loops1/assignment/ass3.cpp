#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 4; i <= 1 + 3 * n; i += 3)
  {

    cout << i << " ";
  }
}