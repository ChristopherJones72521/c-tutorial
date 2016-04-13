/* 
* Name: lab8_bmr.cpp
* Description: This program calculates your basal metabolic rate 
* Author: Christopher Jones
* Date: 9/16/2014
*/

// Pretty straight forward program here

#include <iostream> // and this
#include <string> // and this

using namespace std;

int main(){

  // Declare your variables up front
	char gender; // Accepts a character (either m or f)
	int weight, feet, inches, height, age;
	double result; // a double is a number with a decimal point

	cout << "BMI Calculator.\nPlease enter your Gender. (M or F?)" << endl;
	cin >> gender;
	cout << "How much do you weigh (in pounds)?" << endl;
	cin >> weight;
	cout << "How many feet tall are you?" << endl;
	cin >> feet;
	cout << "How many additional inches tall are you?" << endl;
	cin >> inches;
	cout << "What is your age (don't worry I won't tell anyone.)" << endl;
	cin >> age;

	height = (feet * 12) + inches;

	if (gender == 'm') {
		result = (66 + (6.3 * weight) + (12.9 * height) - (6.8 * age));
	}
	else
	{
		result = (655 + (4.3 * weight) + (4.7 * height) - (4.7 * age));
	}

	cout << "Your Basal Metabolic Rate is:" << result << endl;

  cout << "Press enter to continue\n";
  cin.get(); // keeps the program open until user presses a key 
  return 0;
}
