#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float value[100], sum = 0, mean; // variables
	int n, above = 0; // variables
	
	cout << "How many values are in the list? ";
	cin  >> n;
	
	for (int count = 0; count < n; count++)
	{
		cin >> value[count]; // input values
		sum += value[count]; // for the mean
	}
	
	mean = sum / n; // calculate mean
	
	for (int count = 0; count < n; count++)
	{
		if (value[count] > mean) // add to above which represents the amount of numbers above the mean
		{
			above++;
		}
	}
	
	cout << above << " values from the list are above the mean of " << fixed << setprecision(2) << mean;
}
