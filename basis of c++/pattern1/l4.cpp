#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 4; i++)
  {
    // for (int j = i; j > 0; j--)
    // {
    //   cout << " * ";
    // }
    // cout << endl;
    // or
    for (int j = 1; j <= i; j++)
    {
      cout << " * ";
    }
    cout << endl;
  }
}