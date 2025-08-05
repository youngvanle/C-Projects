// Implements time adjustment functions for seconds, minutes, and hours.
// Handles rollover when reaching 59 seconds, 59 minutes, or 23 hours.

#include "ClockFunctions.h"

// Add one hour (roll over to 0 after 23)
void addOneHour() {
    unsigned int hr = getHour();

    if (hr >= 0 && hr <= 22) {
        setHour(hr + 1);
    } else if (hr == 23) {
        setHour(0);
    }
}

// Add one minute (roll over to 0 after 59 and add one hour)
void addOneMinute() {
    unsigned int min = getMinute();

    if (min >= 0 && min <= 58) {
        setMinute(min + 1);
    } else if (min == 59) {
        setMinute(0);
        addOneHour();
    }
}

// Add one second (roll over to 0 after 59 and add one minute)
void addOneSecond() {
    unsigned int sec = getSecond();

    if (sec >= 0 && sec <= 58) {
        setSecond(sec + 1);
    } else if (sec == 59) {
        setSecond(0);
        addOneMinute();
    }
}