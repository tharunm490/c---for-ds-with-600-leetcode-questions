#include <iostream>
using namespace std;
int main()
{
  float marksA, marksB, marksC;
  cin >> marksA >> marksB >> marksC;
  if (marksA == marksB && marksB == marksC)
  {
    cout << " all got same" << endl;
  }
  else if ((marksA < marksB) && (marksA < marksC))
  {
    cout << " A got least marks" << endl;
  }
  else if ((marksC < marksB) && (marksC < marksA))
  {
    cout << " C got least marks" << endl;
  }
  else
  {
    cout << " B got least marks" << endl;
  }
}