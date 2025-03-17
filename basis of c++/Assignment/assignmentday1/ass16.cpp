#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float num1, num2, den1, den2;
  cin >> num1 >> den1 >> num2 >> den2;
  float num = ((num1) / den1) + ((num2) / den2);
  cout << "The sum of the fractions is: " << num;
  return 0;
}