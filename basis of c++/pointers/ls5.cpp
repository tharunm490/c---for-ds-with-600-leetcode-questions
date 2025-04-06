#include <iostream>
using namespace std;
void swaping(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << a << "\n"
       << b;
}
int main()
{
  int a, b;
  cin >> a >> b;
  swaping(a, b);
  cout << "\n"
       << a << "\n"
       << b;
}