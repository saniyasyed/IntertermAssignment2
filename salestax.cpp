#include <iostream>
#include <iomanip>
using namespace std;

float addTax(float taxRate, float cost)
{
  // converting taxRate as a percentage to a decimal
  taxRate = taxRate / 100.0;
  // calculating sales tax on the item
  float taxOnItem = cost * taxRate;
  // adding sales tax to the cost of item for the total cost
  float totalCost = taxOnItem + cost;
  // using to round totalCost to 2 decimals to properly display the total cost
  cout << setprecision(2) << fixed;
  return totalCost;
}
int main()
{
  cout << "The total cost with tax is: $" << addTax(12.2, 52.24) << endl;
  return 0;
}
