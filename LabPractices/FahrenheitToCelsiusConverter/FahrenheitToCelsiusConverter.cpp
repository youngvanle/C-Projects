/*
This program is designed to read data from FahrenheitTemperature.txt,
convert the data to Celsius, and output the conversion as an external text file "CelsiusTemperature.txt"
*/

// Libraries for input/output and file stream handling
#include <iostream>
#include <fstream>
#include <string>

// Use standard namespace
using namespace std;

// Main function to handle file reading, conversion, and writing
int main() {

    // Input file to read Fahrenheit temperatures
    ifstream inputFile("FahrenheitTemperature.txt");

    // Check if input file opened successfully
    if (!inputFile.is_open()) {
        // Output error message and exit if file cannot be opened
        cout << "Error: Could not open FahrenheitTemperature.txt" << endl;
        return 1;
    }

    // Output file for writing Celsius temperatures
    ofstream outputFile("CelsiusTemperature.txt");

    // Check if output file opened successfully
    if (!outputFile.is_open()) {
        // Output error message and exit if file cannot be created
        cout << "Error: Could not create CelsiusTemperature.txt" << endl;
        return 1;
    }

    // Format output with two decimal places
    outputFile.setf(ios::fixed);
    outputFile.precision(2);

    // Variables for city name and Fahrenheit temperature
    string city;
    int fahrenheit;

    // Loop to read city and temperature from input file
    while (inputFile >> city >> fahrenheit) {
        // Convert Fahrenheit to Celsius
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;

        // Write city and converted Celsius value to output file
        outputFile << city << " " << celsius << endl;
    }

    // Close both input and output files
    inputFile.close();
    outputFile.close();

    // Confirm successful conversion to user
    cout << "Successfully converted Fahrenheit to Celsius.  Please check CelsiusTemperature.txt." << endl;

    // End of program
    return 0;
}