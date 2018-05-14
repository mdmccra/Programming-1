#include <iostream>
using namespace std;

int main ()
{
	int n, rev = 0, z; // variables, rev must = 0, z is placeholder
	cout << "This program reverses the digits of an integer." << endl;
	cout << endl;
	cout << "Enter an integer: ";
	cin  >> n; // inputs number to be reversed
	
	while (n >= 1) // we do not care about decimals because it is an integer
	{
		z = n % 10; // gets rightmost digit
		rev = (rev * 10) + z; // gets other digits
		n = n / 10; // gets other digits
	}
	
	cout << "The reversed number is " << rev << "."; // outputs reversed number
}
