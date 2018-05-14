#include <iostream>
using namespace std;
	
	int main ()
	{
		int numerator, denominator, whole;
		cout << "Numerator: ";
		cin  >> numerator;
		cout << "Denominator: ";
		cin  >> denominator;
		
		whole = numerator/denominator;
		numerator = numerator % denominator;
		
		cout << endl;
		cout << whole << " " << numerator << "/" << denominator;
		
	}
