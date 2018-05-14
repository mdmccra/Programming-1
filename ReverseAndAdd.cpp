#include <iostream>
using namespace std;

int reverseDigits(int n)
{
	int rev = 0, z;
	
	while (n >= 1) // we do not care about decimals because it is an integer
	{
		z = n % 10; // gets rightmost digit
		rev = (rev * 10) + z; // gets other digits
		n = n / 10; // gets other digits
	}
	
	return rev;
}

int main()
{
	int n, i;
	
	cout << "Enter number: ";
	cin  >> n;
	cout << endl; // collect user input
	
	for (i = 0; n != reverseDigits(n) && i < 200; i++)
	{
		n += reverseDigits(n); // add the reversed number to the original number
	}
	
	if (i == 200)
		cout << "No palindrome found."; // no palindrome if it reaches 200
	else
		cout << "Palindrome: " << n; // output reversed number
}
