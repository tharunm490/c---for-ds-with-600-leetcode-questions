#include <iostream>
using namespace std;
int main()
{
  char alpha;
  cin >> alpha;
  if (alpha >= 'a' && alpha <= 'z')
  {
    cout << char(int(alpha) - 32) << endl;
  }
  else if (alpha >= 'A' && alpha <= 'Z')
  {
    cout << char(int(alpha) + 32) << endl;
  }
  else
  {
    cout << " undefined alphabet" << endl;
  }
}