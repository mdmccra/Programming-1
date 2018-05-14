#include <iostream>
using namespace std;

int main()
{
	string n;
	char a;
	int count = 0, high = 0; // declare variables
	
	cout << "Enter a string: ";
	cin  >> n;
	cout << endl << "The most frequent character in " << n << " is ";
	
	for (int i = 0; n[i] != 0; i++) // sets values to uppercase
		n[i] = toupper(n[i]);
	
	for (int i = 0; n[i] != 0; i++) // stays on letter in index
	{
		for (int j = i; n[j] != 0; j++) // compares the letter from outer loop to others in the index
		{
			if (n[i] == n[j]) // if it is equal to another character adds 1 to count
				count++;
		}
		
		if (count > high) // keeps track of the highest value
			{
				high = count;
				a = n[i];
			}
		
		count = 0; // reset value of count
	}
		
	cout << a << ".";
}
