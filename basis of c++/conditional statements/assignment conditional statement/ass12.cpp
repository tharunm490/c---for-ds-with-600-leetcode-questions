#include <iostream>
using namespace std;

int main()
{
  int choice;
  float value, result;
  cout << "Menu:\n";
  cout << "1. Cm to ft\n";
  cout << "2. Km to miles\n";
  cout << "3. USD to INR\n";
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "Enter value in cm: ";
    cin >> value;
    result = value / 30.48; // 1 ft = 30.48 cm
    cout << value << " cm is " << result << " ft\n";
    break;
  case 2:
    cout << "Enter value in km: ";
    cin >> value;
    result = value * 0.621371; // 1 km = 0.621371 miles
    cout << value << " km is " << result << " miles\n";
    break;
  case 3:
    cout << "Enter value in USD: ";
    cin >> value;
    result = value * 74.85; // Example conversion rate, 1 USD = 74.85 INR
    cout << value << " USD is " << result << " INR\n";
    break;
  default:
    cout << "Invalid choice. Please try again.\n";
  }

  return 0;
}