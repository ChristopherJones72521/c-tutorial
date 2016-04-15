////////////////////////////////////////////////////////////////////////////////////////////////
// Name: lab7_main.cpp
// Description: A program that takes check information from a database file and prints the check.
// Author: Christopher Jones
// Alert: The NSA has not reviewed this code
// Date: 04/14/2016
////////////////////////////////////////////////////////////////////////////////////////////////

#include "lab7_file.hpp"

int main(){

  // Declare your variables upfront for use later in the program
	string date, name, payee, dollars, cents;
	// int dollars = atoi(str_dollars.c_str()); // atoi converts a string into an integer
	// int cents = atoi(str_cents.c_str()); 

	// opening database.txt
	fin.open("database.txt"); // fin (file in) is from the fstream header file and works like cin only it works on a file
	if (fin.fail()) // if the file is unable to open, we need to tell the user what is going on
	{
		cerr << "Unable to open file database.txt \n";
		exit(0);
	}

  /*cerr is a predefined output error stream (defined in <iostream>), to which you should send all
  * error messages. It defaults to the terminal (just like cout. )
  */

	fout.open("check.txt"); // fout (file out) is our output file stream. We will be writing data to check.txt
	if (fout.fail())
	{
		cerr << "Unable to open file check.txt \n";
		exit(0);
	}

	// declare array check 
	string check[13]; // string array thirteen strings long (memory has been allocated for this)

	// indexing the value
	for (int i = 0; i < 13; i++) { // for loop to iterate through the values and assign them to unique indices
		fin >> check[i]; // fin will pass each new value into a different index
	}
	
  // Assign different index values variable names
	date = check[1];
	name = check[3] + check[4];
	dollars = check[7];
	cents = check[8] + check[9];
	payee = check[11] + check[12];

	fout << endl << endl << "Your Check:" << endl << endl; // output to file

	write_check(date, name, dollars, cents, payee);

return 0;
}
