#include <iostream>
using namespace std;
int main()
{
  int a, b;
  int *c = &a, *d = &b;
  cin >> *c >> *d;
  cout << *c + *d;
}