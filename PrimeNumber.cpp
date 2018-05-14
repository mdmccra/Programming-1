#include <iostream>
using namespace std;

int main ()
{
	int n, x;
	bool prime = true;
	
	cout << "Enter number: ";
	cin  >> n;
	cout << endl;
		
	for (x = 3; x < n/2; x++) // x starts at 3 because we check 1 and 2 later
	{
		if (n % x == 0) // if prime, sets value to false
		{
			prime = false;
		}
	}

	if (n == 1) // easier way to solve for 1
		cout << "1 is not prime.";
	else if (n % 2 == 0 && n != 2) // even numbers other than 2
		cout << n << " is not prime.";
	else if (prime)
		cout << n << " is prime.";
	else
		cout << n << " is not prime.";
}
