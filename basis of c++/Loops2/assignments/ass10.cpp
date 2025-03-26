#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  cin >> num1 >> num2;
  int hcf;
  int small = min(num1, num2);
  int big = max(num1, num2);
  int result = big;
  for (int i = 1; i <= small; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      hcf = i;
    }
  }
  cout << " the highest common factor of " << num1 << " and " << num2 << " is " << hcf << endl;
  while (true)
  {
    if (result % num1 == 0 && result % num2 == 0)
    {
      break;
    }
    result = result + big;
  }
  cout << " the LCM of " << num1 << " and " << num2 << " is " << result << endl;
}