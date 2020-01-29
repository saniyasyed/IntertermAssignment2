#include <iostream>
using namespace std;

// void function that takes two int call by reference parameters and sets them both to 0
void zeroBoth(int &num1, int &num2)
{
  num1 = 0;
  num2 = 0;
}
int main()
{
  // declaring two ints that we will use to call function
  int x = 15;
  int y = 512;
  // displaying variables before the function is called
  cout << "First number before function call: " << x << endl;
  cout << "Second number before function call: " << y << endl;
  zeroBoth(x, y); // calling void function
  // displaying variables after function is called
  cout << "First number after function call: " << x << endl;
  cout << "Second number after function call: " << y << endl;
  return 0;

}
