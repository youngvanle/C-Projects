# FahrenheitToCelsiusConverter

This program reads temperature data from a file in Fahrenheit, converts each entry to Celsius, and writes the results to a new output file.

## Features

- Reads from `FahrenheitTemperature.txt`
- Converts temperatures using the standard formula
- Outputs to `CelsiusTemperature.txt` with two decimal places
- Includes basic error handling for file access

## Sample Input File

The program expects an input file named `FahrenheitTemperature.txt` located in the same directory. The file should contain a list of city names followed by Fahrenheit temperatures.

### Format:
    CityName TemperatureInFahrenheit

### Example:
    Chicago 32
    Dallas 78
    Miami 95
    Seattle 58
