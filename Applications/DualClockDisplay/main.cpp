// Controls program flow for displaying and updating both
// 12-hour and 24-hour clocks using a menu-driven interface.

#include <iostream>
#include "ClockFunctions.h"
#include "Display.h"
#include "Menu.h"
using namespace std;

// Global time variables
unsigned int hour = 0;
unsigned int minute = 0;
unsigned int second = 0;

// Return current hour
unsigned int getHour() {
    return hour;
}

// Set current hour
void setHour(unsigned int h) {
    hour = h;
}

// Return current minute
unsigned int getMinute() {
    return minute;
}

// Set current minute
void setMinute(unsigned int m) {
    minute = m;
}

// Return current second
unsigned int getSecond() {
    return second;
}

// Set current second
void setSecond(unsigned int s) {
    second = s;
}

int main() {
    // Display initial time on both clocks
    displayClocks(hour, minute, second);

    // Launch the main user menu loop
    mainMenu();

    // Final time display before exit
    displayClocks(hour, minute, second);
    cout << "\nProgram ended. Goodbye!" << endl;

    return 0;
}