// ////////////////////////////////////////////////////////////////////
// This is a section of code where we define a few important parameters
// Name: console_out.cpp
// Description: And God said, "let there be C++" and it was good.
// Author: Christopher Jones
// Date: 8/25/2014
///////////////////////////////////////////////////////////////////////

// While we're on the subject of comments,
/* there is
 * another
 * way
 * to
 * comment */

// See that? You begin your multi-line comment with /* and end it with */ 
// Everything in between is a comment. 

// When you begin a c++ program you will more than likely want to include iostream
// What is iostream? It simply means Input Output stream and will allow for commands such as:
// cin, cout, cerr, and clog (http://www.cplusplus.com/reference/iostream/)

#include <iostream>

// Here, we tell our program which commands we will be using in the program
// We will only need cout (console out) and endl (end line)
using std::cout; using std::endl;

// Most programs in c++ will require a main function in order to execute (it's just good practice)
int main() { // We define 'main' here like this. The curly brace can either go here or on the line below... if you like ugly code.

  // It is good practice to comment your code and explain to anyone else who reads it what is going on. 
 
  // Here I exploit the power of programming to exploit my already large ego
  cout << "Hello, Chris! You're so handsome." << endl; // NEVER EVER FORGET THE SEMICOLON!!!!!

  // See the syntax? cout << the arrows will point in the direction of the flow of data
  // Since the data is going console "out" you will point the arrows ("angle brackets" but whatever) towards the command. 


// since the "main" function is an "int" (short for integer)
// Both in C/C++, return 0 is a reserved "value" which means, 
// everything is OK,! It's common practice to return 0 at the end of the int main(void) function, 
// it's been considered as good programming style. Any number except 0, means that something went wrong!

return 0;
}
