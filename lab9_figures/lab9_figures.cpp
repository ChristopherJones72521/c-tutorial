//////////////////////////////////////////////////////////////////////////////
// Name: lab9_figures.cpp
// Description: This project will print custom figures according to user input
// File Description: All functions are declared in this file
// Author: Christopher Jones
// Date: 04/13/2016
//////////////////////////////////////////////////////////////////////////////

#include "lab9_figures.hpp"
#include <iostream>
#include <string>

using namespace std;

// Variable declaration
int i, n, s, j, size = 0;
string line;

// Outputs square
// Each time through the loop, i will increment
// and line will reset. Loop stops when i < size.
void filledSquare(int size) {
	for (i = 0; i < size; ++i, line = "") {
		for (n = 0; n < size; ++n)
			line += '*';
		cout << line << endl;
	}
	cout << endl;
}

// Outputs hollow square
// Each time through the loop, i will increment
// and line will reset. Loop stops when i < size.
void hollowSquare(int size) {
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
}

// Outputs left triangle
// Each time through the loop, i will increment
// and line will reset. Loop stops when i < size.
void leftTriangle(int size) {
	for (i = 0; i < size; ++i, line = "") {
		for (n = 0; n <= i; ++n)
			line += '*';
		cout << line << endl;
	}
}

// Outputs the right triangle
// s counts the stars
// j counts the spaces
// Each time through the loop, s will increment,
// j will decrement, and line will reset. Loop
// will stop when s equals the entered size.
void rightTriangle(int size) {
	for (j = size - 1, s = 1; s <= size; ++s, --j, line = "") {
		for (i = 0; i < j; ++i)
			line += ' ';
		for (i = 0; i < s; ++i)
			line += '*';
		cout << line << endl;
	}
}
