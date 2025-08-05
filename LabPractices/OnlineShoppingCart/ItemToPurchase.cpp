// Implements the ItemToPurchase class functions for setting and retrieving
// item details such as name, price, and quantity.

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Constructor to initialize default values
ItemToPurchase::ItemToPurchase() {
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

// Set the item name
void ItemToPurchase::SetName(string name) {
   itemName = name;
}

// Set the item price
void ItemToPurchase::SetPrice(int price) {
   itemPrice = price;
}

// Set the item quantity
void ItemToPurchase::SetQuantity(int quantity) {
   itemQuantity = quantity;
}

// Get the item name
string ItemToPurchase::GetName() const {
   return itemName;
}

// Get the item price
int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

// Get the item quantity
int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}