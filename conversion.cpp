#include <iostream>
using namespace std;

// void function to print out conversion
void displayConversion(float meters, float centimeters)
{
  cout << "Length after conversion: " << endl;
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

// void function that converts the length from feet and inches to meters and centimeters
void calcConversion(float feet, float inches)
{
  float meters = 0;
  float centimeters = 0;
  float metersPerFoot = 0.3048;
  float metersPerInch = metersPerFoot / 12;
  meters = feet * metersPerFoot; // converting feet to meters
  centimeters = inches * 2.54; // converting inches to centimeters

  // calling displayConversion with the meter and centimeter conversion
  displayConversion(meters, centimeters);
}

// void method to get user input in feet and inches
void getUserInput()
{
  float feet = 0;
  float inches = 0;
  cout << "Enter the number of feet: " << endl;
  cin >> feet;
  cout << "Enter the number of inches: " << endl;
  cin >> inches;

  // calling calcConversion with the number of feet and inches as the parameter
  calcConversion(feet, inches);
}

int main()
{
  bool keepRunning = true;
  string userResponse = "";
  // while loop to check if user wants to continue entering data
  while(keepRunning)
  {
    // calling getUserInput function
    getUserInput();

    cout << "Do you want to repeat with new input values? " << endl;
    cout << "Press any key to continue, or type exit to end the program: " << endl;
    cin >> userResponse;
    if(userResponse == "exit") // checking if user enters the word exit
    {
      keepRunning = false; // will exit the program if keepRunning is false
    }
  }

  cout << "Goodbye." << endl;

  return 0;


}
