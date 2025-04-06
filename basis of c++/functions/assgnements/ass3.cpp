#include <iostream>
using namespace std;

void sq(int x, int y)
{

  for (int i = x; i <= y; i++)
  {
    if (i % 2 != 0)
    {
      cout << i << endl;
    }
  }
}

int main()
{
  int n, f;
  cin >> n >> f;
  cout << "The odd numbers between " << n << " and " << f << " are: " << endl;
  sq(n, f);
  return 0;
}