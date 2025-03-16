#include <iostream>
using namespace std;
int main()
{
  // typecasting
  // implicit typecasting
  int a = 5;
  float b = 3.14;
  // cout << a + b << endl;
  // explicit typecasting
  cout << a + (int)b << endl;
  cout << (float)a + b << endl;
  char c = 'a';
  cout << a + c << endl;
  cout << a + (int)c << endl;
  cout << (char)(a + c) << endl;
  cout << (char)(a + (int)c) << endl;
  cout << (int)(a + c) << endl;
  cout << (int)(a + (int)c) << endl;
}
