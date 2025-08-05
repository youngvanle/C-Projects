// Declares functions for updating and accessing the current time values
// including hours, minutes, and seconds.

#ifndef CLOCKFUNCTIONS_H
#define CLOCKFUNCTIONS_H

// Add one second to the current time
void addOneSecond();

// Add one minute to the current time
void addOneMinute();

// Add one hour to the current time
void addOneHour();

// Get the current hour
unsigned int getHour();

// Set the current hour
void setHour(unsigned int h);

// Get the current minute
unsigned int getMinute();

// Set the current minute
void setMinute(unsigned int m);

// Get the current second
unsigned int getSecond();

// Set the current second
void setSecond(unsigned int s);

#endif