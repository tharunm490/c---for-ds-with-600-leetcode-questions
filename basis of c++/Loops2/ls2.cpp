#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i < 8; i++)
  {
    if (i == 4)
    {
      continue;
    }
    else
    {
      if (i % 2 == 0)
      {
        cout << i << " ";
      }
    }
  }
  return 0;
}