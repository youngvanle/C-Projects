// Declares functions for displaying the user menu and handling menu input logic.

#ifndef MENU_H
#define MENU_H

// Display a numbered menu with borders
void printMenu(char* strings[], unsigned int numStrings, unsigned char width);

// Get a valid menu choice between 1 and maxChoice
unsigned int getMenuChoice(unsigned int maxChoice);

// Run the main program loop for clock updates
void mainMenu();

#endif