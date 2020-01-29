#include <iostream>
using namespace std;

int main()
{
  //declaring an array of index 10
  int numberArray[10];
  int number;
  // iterating through a loop 10 times to get user input
  for(int i = 0; i < 10; ++i)
  {
    cout << "Please enter #" << i + 1 << ": " << endl;
    cin >> number;
    // checking to make sure that user does not enter a negative number
    if(number < 0)
    {
      // prompting user to reeneter number if they entered a negative number
      cout << "Please enter a nonnegative number: " << endl;
      cin >> number;
    }
    // filling the array with the user input
    numberArray[i] = number;
  }

  // iterating through the array to display value at each index
  for(int i = 0; i < 10; ++i)
  {
      cout << numberArray[i] << endl;
  }

  return 0;
}
