/* 
* Name lab10_lottery.cpp
* Description: 10 random non-repeating positive numbers (the lottery numbers),
* takes a single input from the user and checks the input with the
* ten lottery numbers.
* Author: Christopher Jones
* Date: 04/13/2016
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* a quick lesson on arrays: An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
 *
 * You declare an array like this: int a = [] or the array can be filled with data [1,2,3,4,5]
 *
 * Below, we are passing an array into our functions (int[]) which tells it to expect an integer array
 */

// initializes the array by user input
// Prototyping functions in the file header is also an option
void initialize(int[]); // dunno if we covered arrays... 
void entry(int&); // here we are using a "dereferencing" operator (https://en.wikipedia.org/wiki/Dereference_operator)
void draw(int[]);
bool check(int, int[]);
bool win(int, int[]);

/* A Great example of dereferencing
 * 
 * int x;
 * int *p;  // * is used in the declaration:
 *         // p is a pointer to an integer, since (after dereferencing),
 *         // *p is an integer
 * x = 0;
 * // now x == 0
 * p = &x;  // & takes the address of x
 * // now p == &x, so *p == x
 * *p = 1;  // equivalent to x = 1, since *p == x
 * // now *p == 1 and *p == x, so x == 1
 *
 * Get it? If not message me on the Slack
*/

int main(){

	int guess, wins[10];

  // running functions in sequence
	initialize(wins);
	draw(wins);
	entry(guess); 

  // Main program logic 
	if (win(guess, wins) == true)
		cout << "You are the winner!" << endl;
	else
		cout << "Loser! The lottery is a tax on people who are bad at math!" << endl;
	cout << "The winning numbers were" << endl;
	for (int p = 0; p < 9; p++)
		cout << wins[p] << ",";
	cout << " Your guess was " << guess << ".\n";

return 0;
}

// Function definitions

// fills upt the array a of "size"
void initialize(int wins[]) {
	for (int i = 0; i < 10; ++i)
		wins[i] = -1;
}

// Draws a number between 0 and 100
void draw(int wins[]){
	srand(time(NULL));
	for (int n = 0; n < 10; n++) {
		wins[n] = rand() % 100;
		if (check(n, wins) == false)
			wins[n] = rand() % 100;
	}
}

// Function definition for entry 
void entry(int& guess) {
	cout << "Please guess a number (you could be the big winner)" << endl;
	cin >> guess;
}

// checks if the value generated has been generated to prevent duplicates
bool check(int on, int wins[]) {
	for (int k = 0; k < on; k++){
		if (wins[on] == wins[k])
			return false;
	}
	return true;
}

// Checks for winners!
bool win(int guess, int wins[]){
	for (int p = 0; p < 10; p++){
		if (guess == wins[p])
			return true;
	}
	return false;
}

