/*
This program analyzes grocery purchase data and displays item frequency using a class-based design.
*/

// Include libraries for input/output
#include <iostream>

// Include PurchasedItems class header
#include "PurchasedItems.h"

// Use standard namespace
using namespace std;

// Main function
int main() {
    // Create object for PurchasedItems
    PurchasedItems Tracker;

    // Variable: store menu choice
    int MenuChoice = 0;

    // Variable: store user's input
    string UserItem;

    // Outer loop: keep running until user selects Exit
    while (MenuChoice != 4) {
        // Display menu options
        cout << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "               Purchase Frequency Menu                " << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. Search how often an item has been purchased" << endl;
        cout << "2. Show all item purchases as a count" << endl;
        cout << "3. Show all item purchases as a graph" << endl;
        cout << "4. Exit" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Enter your choice (1–4): ";
    }

        // Get user input
        cin >> MenuChoice;

        // Input validation for input
        while (cin.fail()) {
            // Clear error state
            cin.clear();
            // Discard leftover input
            cin.ignore(1000, '\n');
            // Prompt again
            cout << "Please enter a number between 1 and 4: ";
            cin >> MenuChoice;
        }

        // Input validation for input
        while (MenuChoice < 1 || MenuChoice > 4) {
            cout << "Please enter a number between 1 and 4: ";
            cin >> MenuChoice;
        }

        // Menu Option 1: Search item purchase rate
        if (MenuChoice == 1) {
            // Prompt for item name
            cout << "Enter name of item to search: ";
            // Clear newline from previous input
            cin.ignore();
            getline(cin, UserItem);

            // Call class method to search and print
            Tracker.SearchPurchasedItem(UserItem);
        }

        // Menu Option 2: Display all item purchase count
        else if (MenuChoice == 2) {
            // Call class method to print
            Tracker.PrintPurchasedItemCount();
        }

        // Menu Option 3: Display purchase graph
        else if (MenuChoice == 3) {
            // Call class method to print
            Tracker.PrintPurchasedItemGraph();
        }

        // Menu Option 4: Exit
        else if (MenuChoice == 4) {
            // Exit message
            cout << "Thank you for using the item tracker." << endl;
        }
    }

    // End of program
    return 0;
}