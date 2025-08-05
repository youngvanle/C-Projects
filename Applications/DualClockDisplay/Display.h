// Declares functions for formatting and displaying 12-hour and 24-hour clocks with borders.

#ifndef DISPLAY_H
#define DISPLAY_H

// Display both clocks with labels and borders
void displayClocks(unsigned int h, unsigned int m, unsigned int s);

// Format time in 12-hour format with AM/PM
std::string formatTime12(unsigned int h, unsigned int m, unsigned int s);

// Format time in 24-hour format
std::string formatTime24(unsigned int h, unsigned int m, unsigned int s);

#endif