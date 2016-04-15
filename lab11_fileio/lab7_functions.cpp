/////////////////////////////////////////////////////////////////////////////////////// 
// Name: lab7_functions.cpp
// Description: A program takes check information from a txt file and prints the check.
// Author: Christopher Jones
// Date: 04/14/2016
///////////////////////////////////////////////////////////////////////////////////////

#include "lab7_file.hpp"

void write_check(string date, string name, string dollars, string cents, string payee){

	string line1 = name,
		line2 = "Pay to: " + payee,
		line3 = dollars + " and " + cents + "/100";

  fout << line1 << "\t\t" << date << endl
		<< line2 << "\t\t$" << dollars << '.' << cents << endl
		<< line3 << "\t\t" << "dollars" << endl;
}

/*
// Number Spell Function
string number_spell(int number)
{
	string tens, singles, output[2];

	for (int i = 0; i < 2; ++i) {
		switch (number[i])
			if (number[0] == 1)
			{
			switch (number[1])
			{
			case '0':
				singles = "Ten";
				break;
			case '1':
				singles = "Eleven";
				break;
			case '2':
				singles = "Twelve";
				break;
			case '3':
				singles = "Thirteen";
				break;
			case '4':
				singles = "Fourteen";
				break;
			case '5':
				singles = "Fifteen";
				break;
			case '6':
				singles = "Sixteen";
				break;
			case '7':
				singles = "Seventeen";
				break;
			case '8':
				singles = "Eighteen";
				break;
			case '9':
				singles = "Nineteen";
				break;
			}
			}
			else if (number[0] == 0) {
				switch (number[1])
				{
				case '0':
					singles = " ";
					break;
				case '1':
					singles = "one ";
					break;
				case '2':
					singles = "two ";
					break;
				case '3':
					singles = "three ";
					break;
				case '4':
					singles = "four ";
					break;
				case '5':
					singles = "five ";
					break;
				case '6':
					singles = "six ";
					break;
				case '7':
					singles = "seven ";
					break;
				case '8':
					singles = "eight ";
					break;
				case '9':
					singles = "nine ";
					break;
				}
			}
			else if (number[1] == 0) {
				switch (number[0]) {
				case '0':
					tens = "zero";
					break;
				case '2':
					tens = "twenty-";
					break;
				case '3':
					tens = "thirty-";
					break;
				case '4':
					tens = "forty-";
					break;
				case '5':
					tens = "fifty-";
					break;
				case '6':
					tens = "sixty-";
					break;
				case '7':
					tens = "seventy-";
					break;
				case '8':
					tens = "eighty-";
					break;
				case '9':
					tens = "ninety-";
					break;
				}
				if (number[0] == 0)
				{
					switch (number[1])
					{
					case '0':
						singles = "zero ";
						break;
					case '1':
						singles = "one ";
						break;
					case '2':
						singles = "two ";
						break;
					case '3':
						singles = "three ";
						break;
					case '4':
						singles = "four ";
						break;
					case '5':
						singles = "five ";
						break;
					case '6':
						singles = "six ";
						break;
					case '7':
						singles = "seven ";
						break;
					case '8':
						singles = "eight ";
						break;
					case '9':
						singles = "nine ";
						break;
					}

					if (i == 0)
						output[i] = tens;
					else
						output[i] = singles;
				}

				return tens + " " + singles;
			}

	}
}*/
