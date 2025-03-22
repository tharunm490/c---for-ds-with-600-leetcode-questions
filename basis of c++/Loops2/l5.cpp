#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  cout << " the original number is " << n << endl;
  int rem;
  int rev = 0;
  while (n > 0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }

  cout << " the reverse of a number is " << rev;
}
