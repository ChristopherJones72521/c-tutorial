//////////////////////////////////////////////////////////////////////////////
// Name: main.cpp
// Description: This project will print custom figures according to user input
// File Description: The main file is where the actual program is run 
// Author: Christopher Jones
// Date: 04/13/2016
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "lab9_figures.hpp"
// we don't have to include the function declaration file because their prototypes
// are defined in the header file (which is included above)

using namespace std;

int main(){

  // definition of variables used in the main function
	int size = 0, shape = 0;
	char filled;

  // We're using a do / while loop to run the program until the user terminates it
	do {
		// User dialog with program
		cout << "Please select your shape\n 1. Square\n 2. Left Triangle\n 3. Right Triangle\n" << endl;
		cout << "Enter any other number to exit" << endl;
		cin >> shape;
		cout << "Please enter the size of your shape." << endl;
		cin >> size;

		switch (shape) {
		case 1:
			cout << "Filled or Hollow (F or H?)" << endl;
			cin >> filled;
			if (filled == 'F' || filled == 'f') 
				// Runs function to create filled square
				filledSquare(size);
			else if (filled == 'H' || filled == 'h')
				// Runs function to create hollow square
				hollowSquare(size);
			else
				cout << "Please enter either 'F' or 'H'" << endl;
			break;
		case 2:
			// Creates left triangle
			leftTriangle(size);
			cout << endl;
			break;
		case 3:
			// Creates right triangle
			rightTriangle(size);
			cout << endl;
			break;
		}
	} while (shape >0 && shape <= 3); // Perhaps work some logic so it doesn't ask for size of shape?
	return 0;
}
