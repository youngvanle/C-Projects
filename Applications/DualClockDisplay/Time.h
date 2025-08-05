// Declares helper functions for formatting time and layout elements in the clock display.

#ifndef TIME_H
#define TIME_H

#include <string>

// Convert a number to a two-digit string (e.g., 7 → "07")
std::string twoDigitString(unsigned int n);

// Create a string of 'n' characters using the specified character
std::string nCharString(size_t n, char c);

#endif