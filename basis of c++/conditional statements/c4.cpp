#include <iostream>
using namespace std;

int main()
{
  char alpha;
  cin >> alpha;
  // int x = (int)alpha;
  if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
  {
    cout << " it is a alphabet " << endl;
  }
  else
  {
    cout << " it is not alphabet " << endl;
  }
  return 0;
}