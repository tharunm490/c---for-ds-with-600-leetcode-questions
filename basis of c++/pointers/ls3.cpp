#include <iostream>
using namespace std;
int main()
{

  int a = 4;
  int *b = &a;
  *b = 2;
  cout << a;
}