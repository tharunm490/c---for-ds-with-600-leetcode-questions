#include <iostream>
using namespace std;
void print()
{
  int sum = 0;
  for (int i = 1; i <= 4; i++)
  {
    sum = sum + i;
  }
  cout << sum << endl;
}
int main()
{
  print();
}