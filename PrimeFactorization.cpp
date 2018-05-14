#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Number: ";
	cin  >> n;
	cout << endl;
	cout << "( ";
	
	for (int x = 2; x <= n; x++) // x starts at 2 because everything is divisible by 1, while it is <= the input then it will go through the loop while incrementing
	{
		while (n % x == 0) // check how many times that x goes into n
		{
			cout << x;
		
			if (n != x) // final values for x and n are equal so it will not output another *
				cout << " * ";
		
			n /= x; // reduce the value of n after x is taken out of it however many times
		}
	}
	
	cout << " )";
}
