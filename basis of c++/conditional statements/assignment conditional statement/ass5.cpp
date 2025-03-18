#include <iostream>
using namespace std;
int main()
{
  int s1, s2, s3;
  cout << "Enter the lengths of the three sides of the triangle: ";
  cin >> s1 >> s2 >> s3;
  if (s1 == s2 && s2 == s3)
  {
    cout << "it is a equlateral triangle" << endl;
  }
  else if (s1 == s2 || s2 == s3 || s1 == s3)
  {
    cout << "it is a isoceselus triangle" << endl;
  }
  else
  {
    cout << "it is a scalane triangle" << endl;
  }
}
