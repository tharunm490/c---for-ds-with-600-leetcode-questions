#include <iostream>
using namespace std;
int main()
{
  int cp, sp;
  cout << " enter the cost and selling price " << endl;
  cin >> cp >> sp;
  if (sp > cp)
  {
    cout << " you have got the profit of " << sp - cp;
  }
  else
  {
    cout << " you have got the loss of " << cp - sp;
  }
}