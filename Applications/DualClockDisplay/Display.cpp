// Formats and displays both 12-hour and 24-hour clocks with labels and borders.

#include <iostream>
#include <string>
#include "Display.h"
#include "Time.h"
using namespace std;

// Display labeled 12-hour and 24-hour clocks with borders
void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
    // Top border
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;

    // Clock labels
    cout << "*" << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << "*" << nCharString(3, ' ');
    cout << "*" << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << "*" << endl;

    // Spacing
    cout << endl;

    // 12-hour clock time
    cout << "*" << nCharString(6, ' ') << formatTime12(h, m, s) << nCharString(7, ' ') << "*" << nCharString(3, ' ');

    // 24-hour clock time
    cout << "*" << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(9, ' ') << "*" << endl;

    // Bottom border
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
}

// Format time in 12-hour format with AM/PM
string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
    string ampm;

    // Determine AM or PM
    if (h < 12) {
        ampm = "A M";
    } else {
        ampm = "P M";
    }

    // Convert hour to 12-hour format
    unsigned int hour12;
    if (h == 0 || h == 12) {
        hour12 = 12;
    } else {
        hour12 = h % 12;
    }

    // Format components with leading zeroes
    string hour = twoDigitString(hour12);
    string minute = twoDigitString(m);
    string second = twoDigitString(s);

    // Combine formatted components
    return hour + ":" + minute + ":" + second + " " + ampm;
}

// Format time in 24-hour format
string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
    // Format components with leading zeroes
    string hour = twoDigitString(h);
    string minute = twoDigitString(m);
    string second = twoDigitString(s);

    // Combine formatted components
    return hour + ":" + minute + ":" + second;
}