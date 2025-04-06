#include <iostream>
using namespace std;
int main()
{
  int a;
  int *b = &a;
  cin >> *b;
  cout << b << "\n"
       << b + 1 << endl;
  cout << ++*b << "\n"
       << *b++;
}