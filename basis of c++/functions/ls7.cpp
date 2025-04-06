#include <iostream>
using namespace std;
void print(int x, int y)
{
  cout << " addres of x " << &x << endl;
  cout << " addres of y " << &y << endl;
}
int main()
{
  int c = 1;
  int d = 3;
  cout << " addres of c" << &c << endl;
  cout << " addres of d " << &d << endl;
  print(c, d);
}