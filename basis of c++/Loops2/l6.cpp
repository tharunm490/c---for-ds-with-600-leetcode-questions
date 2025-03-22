#include <iostream>
using namespace std;
int main()
{
  cout << " finding the sum of these series " << "1 -2 + 3 -4 + 5 -6 + 7 -8 + ..... n " << endl;
  int n;
  cin >> n;
  int sumodd = 0;
  int sumeven = 0;
  int totalsum;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sumodd = sumodd + i;
    }
    else
    {
      sumeven = sumeven + i;
    }
  }
  totalsum = sumodd - sumeven;
  cout << " the sum of series is " << totalsum;
}