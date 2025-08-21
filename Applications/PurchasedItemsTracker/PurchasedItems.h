// Header file for the PurchasedItems class used to track and analyze item purchases

#ifndef PURCHASEDITEMS_H
#define PURCHASEDITEMS_H

// Include necessary libraries
#include <string>
#include <map>

using namespace std;

// Class for tracking item purchase frequency
class PurchasedItems {
public:
    // Constructor: reads purchase data from file and builds the item frequency map
    PurchasedItems();

    // Search and display how many times an item was purchased
    void SearchPurchasedItem(const string& itemName);

    // Print all items with their total purchase count
    void PrintPurchasedItemCount();

    // Print all items as a simple asterisk graph
    void PrintPurchasedItemGraph();

private:
    // Map to store item names and their respective counts
    map<string, int> ItemPurchased;

    // Helper: convert a string to lowercase
    string Lowercase(const string& word);

    // Save the item frequency data to an output file
    void SaveData();
};

#endif