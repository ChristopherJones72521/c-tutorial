/////////////////////////////////////
// Name: lab7_file.hpp
// Author: Christopher Jones
// Date: 04/14/2016
/////////////////////////////////////

// protects against multiple inclusion

#ifndef LAB7_FILE_H
#define LAB7_FILE_H

// more inclusions

#include <iostream>
#include <string>
#include <stdlib.h> // contains atoi() and exit()
#include <stdio.h> // Not sure what we need this for
#include <fstream>
#include <sstream>

using namespace std;

// Declare an input file stream with whatever name you choose in your main program (I like fin )
// and an output file stream (fout here) as follows:

ifstream fin; // input stream
ofstream fout; // output stream

// function prototypes defined here (why am I using pointers?)
// I think it's because we want to alter the contents of that value?
void write_check(string date, string name, string dollars, string cents, string payee);
string number_spell(int number);

#endif
