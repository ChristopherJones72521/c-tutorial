/* 
* Name: lab7_calc.cpp
* Description: This program will carry out a complex mathematical operation
* Author: Christopher Jones
* Date: 4/13/2016
*/

#include <iostream>
#include <cmath> // declares a set of functions to compute common mathematical operations and transformations

using namespace std; 

int main(){

  // Declare your variables up front
	int operation;
	double base, result, exponent;
	bool continue = true; // a bool is a data type which is either true or false
	
  // User will select their choice based on menu options
	do {
		cout << "1. absolute value\n2. ceiling\n3. power\n4. logarithm\nSelect an operation: ";
    // Do you notice the '\n' above? It means "add a newline here" 
		cin >> operation;

		if (operation >= 1 && operation <= 4) { // in C++ the "&&" means "and"
			cout << "Enter number: ";
			cin >> base;
			switch (operation) { // switch operator used here to avoid redundancy
			case 1:
				result = abs(base); // do you see how we just pass "base" to each of these functions?
				break;
			case 2:
				result = ceil(base);
				break;
			case 3:
				cout << "Enter exponent: ";
				cin >> exponent;
				result = pow(base, exponent);
				break;
			case 4:
				result = log(base);
				break;
			}
			cout << "The result is: " << result << endl << endl; // You can endl all day. It just adds space.
		}
		else {
			continue = false; // exits out of program
		}
	} while (continue == true);

	return 0;
}
