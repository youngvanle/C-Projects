// Implements a class for analyzing and tracking item purchase frequency

// Include class header
#include "PurchasedItems.h"

// Include libraries for file input/output and formatting
#include <fstream>
#include <iostream>

using namespace std;

// Constructor: read input file, build item map, and create backup file
PurchasedItems::PurchasedItems() {
    // Open input file
    ifstream InFile("purchase_data.txt");

    // Variable: store each item from file
    string Item;

    // Check if file opens successfully
    if (InFile.is_open()) {
        // Read items from file
        while (InFile >> Item) {
            // Convert item to lowercase
            Item = Lowercase(Item);
            // Increment item count in map
            ItemPurchased[Item]++;
        }
        // Close input file
        InFile.close();
    }
    else {
        // Display error if file can't be opened
        cout << "Unable to open file." << endl;
    }

    // Create backup file after processing
    SaveData();
}

// Convert string to lowercase for comparison
string PurchasedItems::Lowercase(const string& Word) {
    string LowerWord = Word;

    // Loop through each character
    for (int i = 0; i < LowerWord.length(); ++i) {
        LowerWord[i] = tolower(LowerWord[i]);
    }

    return LowerWord;
}

// Search for a specific item and print purchase count
void PurchasedItems::SearchPurchasedItem(const string& ItemName) {
    // Convert input to lowercase
    string SearchItem = Lowercase(ItemName);

    // Check if item exists in map
    if (ItemPurchased.count(SearchItem) > 0) {
        // Display item and count
        cout << ItemName << " was purchased " << ItemPurchased[SearchItem] << " time(s)." << endl;
    }
    else {
        // Item not found
        cout << ItemName << " was not found in the purchase records." << endl;
    }
}

// Output all items and purchase counts
void PurchasedItems::PrintPurchasedItemCount() {
    // Loop through map and print each item with count
    for (const auto& pair : ItemPurchased) {
        cout << pair.first << " " << pair.second << endl;
    }
}

// Output each item's purchase count as a graph
void PurchasedItems::PrintPurchasedItemGraph() {
    // Loop through map and print item + asterisks
    for (const auto& pair : ItemPurchased) {
        cout << pair.first << " ";
        // Output asterisk for each count
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

// Write item data to backup file: frequency.dat
void PurchasedItems::SaveData() {
    // Create output file
    ofstream OutFile("frequency.dat");

    // Write each item and its count to file
    for (const auto& pair : ItemPurchased) {
        OutFile << pair.first << " " << pair.second << endl;
    }

    // Close output file
    OutFile.close();
}