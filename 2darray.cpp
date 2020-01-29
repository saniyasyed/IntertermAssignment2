#include <iostream>
using namespace std;

int main()
{
  // declaring a 2D array
  int a[4][5];
  int number;
  // iterating through the number of rows in the array
  for(int i = 0; i < 4; ++i)
  {
    //iterating through the number of columns in the array
    for(int j = 0; j < 5; ++j)
    {
      // prompting user for input
      cout << "Please enter a number for Row" << i + 1 << " Column " << j + 1 << ": " << endl;
      cin >> number;
      // filling the array with user input
      a[i][j] = number;
    }
  }

  return 0;

}
