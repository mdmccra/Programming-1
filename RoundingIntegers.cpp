#include <iostream>
using namespace std;

int round(int number, int unit) // function for rounding
{
	number /= unit;
	number *= unit; // dividing by the unit then multiplying by the unit changes the last digit to 0 in an int value
	
	return number;
}


int main()
{
	int n, n2; // declare variables
	
	cout << "Enter an integer: ";
	cin  >> n;
	
	n2 = round(n, 10); // use n2 to save value still in n
	cout << endl << "Round to ten: " << n2 << endl;
	
	n2 = round(n, 100); // unit change
	cout << "Round to hundred: " << n2 << endl;
	
	n2 = round(n, 1000); // unit change
	cout << "Round to thousand: " << n2;
}
