///////////////////////////////////////////////////////////////////////
// Name: lab4_numsum.cpp
// Description: Prints the sum of positive numbers that the user inputs
// Author: Christopher Jones
// Date: 09/06/2014
///////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	// Initializing variables 
	int i = 0; // "i" is just a common variable name for any integer
	int total = 0; // "total" is somewhat descriptive of what this variable holds

	// prompt user to enter integers 
	cout << "Input sequence of integers (zero to stop):" << endl;
	
  // Here you see the majestic "do-while" loop in the wild
  // It will execute whatever is in the curly braces
  // So long as the while condition is true
  // An alternative to this syntax is to put "while" with its condition up front
  // However, the do-while format will ensure the code is executed at least once
  // Before the while condition is met 
	do
	{
		cin >> i; // User enters array of integers

		if (i > 0) // Notice in our cout about that "0" is the stopping point
		{
			total += i;
		}
	} while (i != 0); // While the digit isn't our stopping point, execute
	cout << total << endl; // and then return the total

	return 0;

}
