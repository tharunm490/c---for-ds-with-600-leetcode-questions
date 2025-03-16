using namespace std;
#include <iostream>
int main()
{
  int a = 4, b = 2, c;
  c = a++ * ++b + ++a;
  cout << a << " " << b << " " << c; // 6 3 18
}