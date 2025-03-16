#include <iostream>
using namespace std;
int main()
{
  int principal, rate, time;
  cout << "Enter principal amount: " << endl;
  cin >> principal;
  cout << "Enter rate of interest: " << endl;
  cin >> rate;
  cout << "Enter time period: " << endl;
  cin >> time;
  cout << "Simple interest is: " << (principal * rate * time) / 100 << endl;
}