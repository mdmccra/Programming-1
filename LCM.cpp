#include <iostream>
using namespace std;

int main ()
{
	int n1, n2, LCM; // variables
	
	cout << "Enter number: "; // inputs numbers to be compared
	cin  >> n1; // inputs numbers to be compared
	cout << "Enter number: "; // inputs numbers to be compared
	cin  >> n2; // inputs numbers to be compared
	cout << endl;
	
	LCM = n1; // LCM = n1 because LCM has to be a multiple
	
	while (LCM % n1 != 0 || LCM % n2 != 0) // loops until LCM equals a multiple of either n1 or n2
	{
		LCM += n1; // only needs to be done for 1 variable
	}
	
	cout << "LCM: " << LCM; // outputs LCM
}
