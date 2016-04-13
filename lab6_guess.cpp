/*
* Name: lab6_guess.cpp 
* Description: This program is a guessing game using a randomly generated value
* Author: Christopher Jones
* Date: Whatever today is
*/
// I've commented the header using the multi-line style to show you contrast
// It's really up to you which method you use

#include <iostream>
#include <cstdlib> // The C-Standard Library (contains rand) http://www.cplusplus.com/reference/cstdlib/
#include <ctime> // This header file contains functions to get and manipulate date and time information

using namespace std; // Using namespace once again. This will change soon

int main(){
	srand(time(NULL)); // srand = seed rand. the seed sets a specific value to begin generating random increments with 
  // We are using time to seed our random number generator since rand is not random
  // By providing a differnt seed every second, we ensure it is as random as possible
  // the time function is passed a NULL pointer because we have no object in which we want to set the time

	int guess, // initializing our variables
      random_number = rand() % 100; // here we use a modulo which returns the remainder of a division problem
      // The use of the modulo will ensure that whatever our number is, it will be less than 100
	cout << "I selected a number between 0 and 99, what is it?" << endl;

	do {
		cin >> guess;
		// do-while loop will continue to run until guess is equal to the random value
		if (guess < random_number) // Do you understand the conditional logic here?
			cout << "wrong, it is larger, what is it? ";
		else if (guess > random_number)
			cout << "wrong, it is smaller, what is it ";
		else
			cout << "correct!";

	} while (guess != random_number); // Run the loop while the guess is wrong ( != means does not equal )

return 0;
}
