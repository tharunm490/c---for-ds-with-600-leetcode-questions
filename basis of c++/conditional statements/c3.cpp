#include <iostream>
using namespace std;
int main()
{
  int num;
  cin >> num;
  if (num % 5 == 0 && num % 3 == 0)
  {
    cout << " it is divisiable by both 3 and 5 " << endl;
  }
}