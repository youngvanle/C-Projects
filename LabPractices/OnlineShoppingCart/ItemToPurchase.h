// Declares the ItemToPurchase class used to represent an item in a shopping cart,
// including name, price, and quantity with associated mutator and accessor methods.

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

// Class declaration for ItemToPurchase
class ItemToPurchase {
   public:
      // Constructor to initialize default values
      ItemToPurchase();

      // Set the item name
      void SetName(string name);
      // Set the item price
      void SetPrice(int price);
      // Set the item quantity
      void SetQuantity(int quantity);

      // Get the item name
      string GetName() const;
      // Get the item price
      int GetPrice() const;
      // Get the item quantity
      int GetQuantity() const;

   private:
      // Name of the item
      string itemName;
      // Price of a single item
      int itemPrice;
      // Quantity of the item
      int itemQuantity;
};

#endif