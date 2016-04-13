///////////////////////////////////////////////////////////
// Name: lab5_printshapes.cpp
// Description: This program will ask the user for a number 
// and then print two squares and two triangles
// out of stars whose size is equal to the number input.
// Author: Christopher Jones
// Date: Tomorrow
// ////////////////////////////////////////////////////////

#include <iostream>
#include <string> // We're using a new header file here
// http://www.cplusplus.com/reference/string/

using namespace std; // and we are introducing namespace
// Here we are using the standard namespace
/* The built in C++ library routines are kept in the standard namespace. 
 * That includes stuff like cout, cin, string, vector, map, etc. 
 * Because these tools are used so commonly, it's popular to add "using namespace std" 
 * at the top of your source code so that you won't have to type the std:: prefix constantly.
 * HOWEVER, you will not want to get into the practice of this in future projects
 * namespace contains so many different routines that including it will 
 * increase the odds of a conflict with one of your routines
 */

int main(){
  // Here we are declaring all of the variables we will be using
	int i, n, s, j, size = 0; 
	string line; // this will be the first time we've used "string"
  // a string a just an array of characters. Which we will be using in this exercise
  // You can also declare a "char" (character type) and place them in an array
  // This may cut down on the size of your program if you do not ant to include "string"

	cout << "Enter the size of your shape:" << endl;
	cin >> size;
	/*
	* Outputs square
	* Each time through the loop, i will increment
	* and line will reset. Loop stops when i < size.
	*/
	for (i = 0; i < size; ++i, line = "") { // we haven't covered "for loops" yet have we?
		for (n = 0; n < size; ++n) // This is the basic syntax for(i="your starting point"; condition; Do what?)
      // So in the loops above, we start at "0" and so long as this number is less than the number you entered
      // we will either increase the number "n" by 1 each loop. Or add space to line in the case of the outter loop
			line += '*'; // See the syntax here? += means (line = line + '*')   It's just shorter to write it this way
		cout << line << endl;
	}
	cout << endl;
	/*
	* Outputs first triangle
	* Each time through the loop, i will increment
	* and line will reset. Loop stops when i < size.
	*/
	for (i = 0; i < size; ++i, line = "") {
		for (n = 0; n <= i; ++n)
			line += '*';
		cout << line << endl;
	}
	cout << endl;
	/*
	* Outputs the second triangle
	* s counts the stars
	* j counts the spaces
	* Each time through the loop, s will increment,
	* j will decrement, and line will reset. Loop
	* will stop when s equals the entered size.
	*/
	for (j = size - 1, s = 1; s <= size; ++s, --j, line = "") {
		for (i = 0; i < j; ++i)
			line += ' ';
		for (i = 0; i < s; ++i)
			line += '*';
		cout << line << endl;
	}
	cout << endl;
	/*
	* Outputs hollow square
	* Each time through the loop, i will increment
	* and line will reset. Loop stops when i < size.
	*/
	for (i = 0; i < size; ++i, line = "") {
		for (n = 0; n < size; ++n) {
			if (i == 0 || i == (size - 1))
				line += "*";
			else if (n == 0 || n == (size - 1))
				line += "*";
			else
				line += " ";
		}
		cout << line << endl;
	}
	cout << endl;
return 0;
}
