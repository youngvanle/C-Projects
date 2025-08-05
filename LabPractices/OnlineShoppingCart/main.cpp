// Prompts the user for two shopping cart items, collects name, price, and quantity,
// then calculates and displays the total cost.

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   // Create two item objects
   ItemToPurchase item1;
   ItemToPurchase item2;

   string name;
   int price;
   int quantity;

   // Get input for first item
   cout << "Item 1" << endl;

   cout << "Enter the item name:" << endl;
   getline(cin, name);
   item1.SetName(name);

   cout << "Enter the item price:" << endl;
   cin >> price;
   item1.SetPrice(price);

   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item1.SetQuantity(quantity);

   // Clear newline character left in the input buffer
   cin.ignore();

   // Get input for second item
   cout << endl << "Item 2" << endl;

   cout << "Enter the item name:" << endl;
   getline(cin, name);
   item2.SetName(name);

   cout << "Enter the item price:" << endl;
   cin >> price;
   item2.SetPrice(price);

   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item2.SetQuantity(quantity);

   // Display total cost
   cout << endl << "TOTAL COST" << endl;

   // Print details for item 1
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice()
        << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;

   // Print details for item 2
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice()
        << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;

   // Calculate and print combined total
   int total = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());
   cout << endl << "Total: $" << total << endl;

   return 0;
}