#include <iostream>
using namespace std;

int main()
{
	int a[100], n, index = 0; // declare varibles
	bool distinct = true; // declare variable
	
	cout << "Enter integer values into the array, or -1 to stop:" << endl;
	cin  >> a[index];
	
	while (a[index] >= 0) // gather input
	{
		index++;
		cin >> a[index];
	}
	
	cout << endl << "Distinct values in the array:" << endl << "(" << a[0];
	
	for (int i = 1; i < index; i++) // moves up the index until it reaches the last value that was input into the array
	{
		for (int j = 0; j < i; j++) // checks all prior indexes
		{
			if (a[j] == a[i]) // proves the distinct portion false if it is equal to a number prior to itself
				distinct = false;
		}
		if (distinct == true) // if distinct stays true the whole time, then the number is distinct and is printed
			cout << "," << a[i];
		distinct = true; // reset distinct to true after printing in case the value turned false
	}
	cout << ")";
}
