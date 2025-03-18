#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << " enter the positive integer " << endl;
  cin >> num;
  // if (num > 0)
  // {
  //   if (num >= 100)
  //   {
  //     cout << "it is a three-digit number " << endl;
  //   }
  //   else
  //   {
  //     cout << "it is not a three-digit number " << endl;
  //   }
  // }
  // else
  // {
  //   cout << "it is negative " << endl;
  // }
  // or

  if (num > 0 && num >= 100)
  {
    cout << "it is a three-digit number and a postive number" << endl;
  }
  else
  {
    cout << "it is negative number or not a three digit number" << endl;
  }
}