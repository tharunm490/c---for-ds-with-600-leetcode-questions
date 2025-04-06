#include <iostream>
using namespace std;
int main()
{
  int a = 2;
  int *p = &a;
  int **ptr = &p;
  cout << "address of a is " << p << endl;
  cout << "address of p is " << ptr << endl;
  cout << " the value at the address of a is " << *p << endl;
  cout << " the value at the address of p is " << *ptr << endl;
  cout << " the value at the address of p and a is " << **ptr << endl;
}