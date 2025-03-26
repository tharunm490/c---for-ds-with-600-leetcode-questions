#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 4; i++)
  { // First loop
    for (int j = 1; j <= 4; j++)
    { // Second loop
      if (j == i)
        continue; // Skip if j == i
      for (int k = 1; k <= 4; k++)
      { // Third loop
        if (k == i || k == j)
          continue; // Skip if k == i or k == j
        for (int l = 1; l <= 4; l++)
        { // Fourth loop
          if (l == i || l == j || l == k)
            continue;                                            // Skip if l == i, j, or k
          cout << i << " " << j << " " << k << " " << l << endl; // Print the combination
        }
      }
    }
  }
}