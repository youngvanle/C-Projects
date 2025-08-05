// Manages the menu display, user input, and program loop logic for updating clocks.

#include <iostream>
#include <string>
#include "Menu.h"
#include "ClockFunctions.h"
#include "Display.h"
#include "Time.h"
using namespace std;

// Display a formatted menu with numbered options and borders
void printMenu(char* strings[], unsigned int numStrings, unsigned char width) {
    // Top border
    cout << nCharString(width, '*') << endl;

    // Loop through each menu item
    for (unsigned int i = 0; i < numStrings; ++i) {
        cout << "* ";

        // Build menu entry string (e.g., "1 - Add One Hour")
        string menuEntry = to_string(i + 1) + " - " + strings[i];
        cout << menuEntry;

        // Pad with spaces for alignment
        size_t spacesNeeded = width - 2 - menuEntry.length() - 1;
        cout << nCharString(spacesNeeded, ' ');

        cout << "*" << endl;

        // Add spacing between items (except after last)
        if (i != numStrings - 1) {
            cout << endl;
        }
    }

    // Bottom border
    cout << nCharString(width, '*') << endl;
}

// Get a valid menu choice from user (1 to maxChoice)
unsigned int getMenuChoice(unsigned int maxChoice) {
    unsigned int choice = 0;

    // Input loop until valid option is entered
    while (choice < 1 || choice > maxChoice) {
        cin >> choice;
    }

    return choice;
}

// Run main menu loop to display clocks and handle user interaction
void mainMenu() {
    unsigned int choice = 0;

    // Define menu options
    char* menuItems[] = {
        (char*)"Add One Hour",
        (char*)"Add One Minute",
        (char*)"Add One Second",
        (char*)"Exit Program"
    };

    // Repeat menu until user chooses to exit (option 4)
    while (choice != 4) {
        displayClocks(getHour(), getMinute(), getSecond());
        cout << endl;

        printMenu(menuItems, 4, 26);
        choice = getMenuChoice(4);

        // Execute corresponding time adjustment
        if (choice == 1) {
            addOneHour();
        } else if (choice == 2) {
            addOneMinute();
        } else if (choice == 3) {
            addOneSecond();
        }
    }
}