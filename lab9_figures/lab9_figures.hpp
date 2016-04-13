//////////////////////////////////////////////////////////////////////////////
// Name: lab9_figures.hpp
// Description: This project will print custom figures according to user input
// Author: Christopher Jones
// Date: 04/13/2016
//////////////////////////////////////////////////////////////////////////////

// protects against multiple inclusion
// which is, if a header file is included twice in the project, it won't compile
#ifndef figures_H
#define figures_H

// function prototypes defined here
// function prototypes tell the compiler what values to expect in a function
// we define these functions in a separate file

// "void functions are functions that don't "return" a value
void filledSquare(int); // Creates filled square

void hollowSquare(int); // Creates hollow square

void leftTriangle(int); // Creates right triangle

void rightTriangle(int); // Creates left triangle


#endif
