# Purchased Items Frequency Tracker

This C++ program analyzes a list of purchased grocery items and generates reports on how frequently each item appears. It allows users to search for individual item frequencies, display all purchase counts, and visualize results using a simple text-based graph.

## Features

- Reads data from an input file containing purchased item names
- Tracks item frequency using a map (associative array)
- Allows users to:
  - Search how often a specific item was purchased
  - View a list of all item counts
  - View a text-based graph of item frequencies using asterisks
- Saves a backup of frequency data to `frequency.dat` for reuse

## File Structure

- `main.cpp` – Runs the menu system and manages user interaction
- `PurchasedItems.h` – Header file defining the `PurchasedItems` class
- `PurchasedItems.cpp` – Implementation of logic for reading, analyzing, and outputting item data
- `purchase_data.txt` – Sample input file with one item per line (`apple`, `banana`)
- `frequency.dat` – Backup file generated automatically (not tracked in Git)

## Sample Input Format

The program expects an input file named `purchase_data.txt` in the same directory, with each line containing a single purchased item:
```
apple  
banana  
apple  
zucchini  
banana  
banana
```

## Sample Output (Text Graph)

If the user selects the "Graph" option, output may look like:
```
apple    **
banana   ***
zucchini *
```

## Concepts Demonstrated

- C++ file input/output (`ifstream`, `ofstream`)
- Use of `std::map` to track frequencies
- Modular design with separate class and implementation files
- Basic error handling
- Text-based data visualization using loops and formatted output

## Notes

- The program uses lowercase normalization to ensure item name consistency (`Apple` and `apple` are treated the same).
- The generated `frequency.dat` file contains the item-count pairs and can be reused for further analysis.

---

This project was initially created for an academic project but has been cleaned and revised for public presentation.
