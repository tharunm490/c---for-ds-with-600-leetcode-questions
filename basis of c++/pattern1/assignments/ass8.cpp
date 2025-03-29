#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n - 1; j++)
    {
      cout << "  ";
    }
    for (int k = 0; k < i; k++)
    {

      cout << (char)(k + 65) << " ";
    }
    cout << endl;
  }

  return 0;
}
