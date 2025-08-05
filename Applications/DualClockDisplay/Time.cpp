// Provides formatting helpers for time values and menu layout elements.

#include "Time.h"
using namespace std;

// Convert an integer to a two-digit string (e.g., 4 → "04")
string twoDigitString(unsigned int n) {
    if (n < 10) {
        return "0" + to_string(n);
    }
    return to_string(n);
}

// Return a string made of 'n' copies of character 'c'
string nCharString(size_t n, char c) {
    string result = "";

    for (size_t i = 0; i < n; ++i) {
        result += c;
    }

    return result;
}