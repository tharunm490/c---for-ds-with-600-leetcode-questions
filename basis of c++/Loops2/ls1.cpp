#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool x = true;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      x = false;
      break;
    }
  }
  if (x)
  {
    cout << "it is a prime number ";
  }
  else
  {
    cout << " it is a composite number " << endl;
  }
}