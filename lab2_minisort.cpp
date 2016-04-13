////////////////////////////////////////////////////////
// Don't forget to include a file header!!!
// Name: project2_numbersort.cpp
// Description: sorts three integers in increasing order
// Author: Christopher Jones
// Date: Today
// /////////////////////////////////////////////////////

// We will need iostream for this project
// Notice, we don't include a semi-colon after an include 
#include <iostream>

// Notice, we will also be using "cin" (console in) 
using std::cin; using std::cout; using std::endl;

// include your main function
int main(){

  // inputs the numbers
  cout << "Enter three numbers: "; // notice the omission of endl and it's behavior when we run the program
  int one, two, three; // important! We have to declare integers before we use them.
  // Think of it as creating containers with labels for the bits of data. 
  
  // We can technically declare these anywhere in the program, but it is good practice in this case
  // to declare the variables close to where they will be used. 

  // now we use cin or cosole in to take user input and sequentially store them in these three variables
  cin >> one >> two >> three; // notice the direction of the arrows and how the data flows INTO the variables

  int tmp; // Now we need a temporary container to swap our numbers

  // orders one and two
  if (one > two){ // The logic here is if the first number is larger than the second
    tmp = one; // we need to move the first number to a temporary container
    one = two; // more the second variable into the first position
    two = tmp; // and the variable in temp over to the second position
  }

  // orders two and three
  if (two > three){ // now we need to sort out two and three
    tmp = two; // and it follows the same logic as above
    two = three;
    three = tmp;
  }
  // reorders one and two
  if (one > two){ // This about the instance where the series was 321
	tmp = one; // at the end of the last function we would have 213
	one = two; // one more check is necessary to complete the task
	two = tmp;
  }

  // outputs the sorted numbers
  cout << "The sorted numbers are: ";
  cout << one << " " << two << " " << three << endl;

return 0;  
}
