#include <iostream>
using namespace std;

double squareRoot(int number)
{
	double guess, pguess, number2; // declare variables

	guess = number / 2; // lessen the range of possible numbers
	
	if (number == 1) // special case for 1
		return 1;
	
	while (guess != pguess) // if guess is equal to previous guess function ends
	{
		number2 = number / guess; // number divided by current guess
		pguess = guess; // keep previous guess and current guess
		guess = (number2 + guess) / 2; // average them
	}
	
	return guess; // return guess because it was the value that was changing
}


int main()
{
	int n;
	double n2;
	
	cout << "Enter number: ";
	cin  >> n;
	cout << endl << "The square root of " << n << " is ";
	
	n2 = squareRoot(n);
	
	cout << n2;
}
