#include <iostream>
using namespace std;

int main()
{
	float x; // variable
	int y; // variable
	
	cout << "Enter a number: "; // prompts user for input
	cin  >> x; // allows user to enter number that will be rounded
	
	if ((float) x - (int) x >= .5 && x >= 0)     // difference will be the decimal points if postive
		y = x + .5; // this will make x round down to the number below it after adding .5

	else if ((float) x - (int) x <= -.5 && x <= 0)     // difference will be the decimal points if negative
		y = x - .5; // this will make x round down to the number below it after subtracting .5
	else
		y = x; // nothing happens, and x will round down as normal
	
	
	cout << "The rounded number is " << y << endl; // produces rounded number
}
