#include <iostream>
using namespace std;

int main ()
{
	int x, y, z, largest; // variables
	
	cout << "This program identifies the largest of three numbers." << endl;
	cout << endl;
	cout << "Enter integer: ";
	cin  >> x; // prompts user for 1st number
	cout << "Enter integer: ";
	cin  >> y; // prompts user for 2nd number
	cout << "Enter integer: ";
	cin  >> z; // prompts user for 3rd number
	cout << endl;
	
	if ((x >= y) && (x >= z)) // conditional statement that will only be true if x is the largest
		largest = x; // changes the value of largest
	if ((y >= x) && (y >= z)) // conditional statement that will only be true if y is the largest
		largest = y; // changes the value of largest
	if ((z >= x) && (z >= y)) // conditional statement that will only be true if z is the largest
		largest = z; // changes the value of largest
		
	cout << "The largest number is " << largest << "."; // outputs the value of largest
}
