// Calculates the estimated cost of driving 20, 75, and 500 miles
// based on user-provided fuel efficiency and cost per gallon.

#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
   double gasMileage;
   double gasCost;

   // Read fuel efficiency (MPG) and gas cost per gallon
   cin >> gasMileage >> gasCost;

   // Set output to two decimal places
   cout << fixed << setprecision(2);

   // Calculate and display cost for each distance
   cout << (20.0 / gasMileage) * gasCost << " ";
   cout << (75.0 / gasMileage) * gasCost << " ";
   cout << (500.0 / gasMileage) * gasCost << endl;

   return 0;
}