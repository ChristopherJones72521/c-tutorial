//////////////////////////////////////////////////////////////////////////////// 
// Name: lab3_numspell.cpp
// Description: Displays a number written alphabetically rather than numerically
// Author: Christopher Jones
// Date: 04/13/2016
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cout; using std::cin; using std::endl;

// At this point you hopefully understand all of the above
int main() {

	// input the numeric values
  // declare your variable
  // can't store data without them
	int num1 = 0;
	int num2 = 0;
	cout << "Enter the first digit of a two digit number: ";
	cin >> num1;
  cout << "Enter the second digit: ";
  cin >> num2;

  // Introduction to logic: if the first number entered is greater than or equal to 2
  // Then there are no "teens" and we can use this syntax. Note the syntax of this statement
	if (num1 >= 2){ // the body of your code goes in the curly braces
		switch (num1){ // Our next logical concept is the switch 
		case 2: // What a switch does is sets multiple conditions and results
			cout << "twenty-"; // in the case that our first number is two, c-out the word "twenty"
			break; // the word "break" will break you out of the switch, which we are now done with
		case 3:
			cout << "thirty-";
			break;
		case 4:
			cout << "forty-";
			break;
		case 5:
			cout << "fifty-";
			break;
		case 6:
			cout << "sixty-";
			break;
		case 7:
			cout << "seventy-";
			break;
		case 8:
			cout << "eighty-";
			break;
		case 9:
			cout << "ninety-";
			break;
		default: // A switch contains a default condition to run incase no other conditions are met
			cout << "Error "; // if the user enters anything other than a number, we display "error"
		}
		switch (num2){ // Now we have to display our second integer
		case 0:
			cout << " "; // if the user enters 20, the first switch will handle it
			break; // So we display nothing in that case
		case 1:
			cout << "one ";
			break;
		case 2:
			cout << "two ";
			break;
		case 3:
			cout << "three ";
			break;
		case 4:
			cout << "four ";
			break;
		case 5:
			cout << "five ";
			break;
		case 6:
			cout << "six ";
			break;
		case 7:
			cout << "seven ";
			break;
		case 8:
			cout << "eight ";
			break;
		case 9:
			cout << "nine ";
			break;
		default:
			cout << "Error ";
		}
	}
	if (num1 == 1) // Here we account for the condition where it is between 10 - 19
		{
		switch (num2)
		{
		case 0:
			cout << "Ten";
			break;
		case 1:
			cout << "Eleven";
			break;
		case 2:
			cout << "Twelve";
			break;
		case 3:
			cout << "Thirteen";
			break;
		case 4:
			cout << "Fourteen";
			break;
		case 5:
			cout << "Fifteen";
			break;
		case 6:
			cout << "Sixteen";
			break;
		case 7:
			cout << "Seventeen";
			break;
		case 8:
			cout << "Eighteen";
			break;
		case 9:
			cout << "Nineteen";
			break;
		default:
			cout << " Error ";
		}
	}
	if (num1 == 0){ // and then say the first digit is a 0
		switch (num2){ // I feel like this is redundant code and there is a better way
		case 0: // Let me know if you think of it
			cout << " ";
			break;
		case 1:
			cout << "one ";
			break;
		case 2:
			cout << "two ";
			break;
		case 3:
			cout << "three ";
			break;
		case 4:
			cout << "four ";
			break;
		case 5:
			cout << "five ";
			break;
		case 6:
			cout << "six ";
			break;
		case 7:
			cout << "seven ";
			break;
		case 8:
			cout << "eight ";
			break;
		case 9:
			cout << "nine ";
			break;
		default:
			cout << " Error ";
		}
	}
	return 0; // There are much better ways to do this. But I just wanted to get you familiar with 
  // Conditional logic such as if statements and switches
}
