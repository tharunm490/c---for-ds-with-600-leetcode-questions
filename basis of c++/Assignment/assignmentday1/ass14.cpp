#include <iostream>
using namespace std;
int main()
{
  // a program that will tell the number of dogs and chicken are there when the
  // user will provide the value of total heads and legs.
  int heads, legs;
  cout << "Enter the number of heads: " << endl;
  cin >> heads;
  cout << "Enter the number of legs: " << endl;
  cin >> legs;
  int dogs = (legs - (2 * heads)) / 2;
  int chicken = heads - dogs;
  cout << "Number of dogs are: " << dogs << endl;
  cout << "Number of chicken are: " << chicken << endl;
}