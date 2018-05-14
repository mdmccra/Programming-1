#include <iostream>
using namespace std;

int main()
{
	int min, cost = 0; // variables
	
	cout << "Enter parking duration (in minutes): ";
	cin  >> min;
	cout << endl << "Parking cost = $"; // get user input
	
	if (min <= 30) // first 30 mins is free
		cost = 0;
	else if (min > 30 && min <= 420) // 2nd time range
	{
		if (min % 30 != 0) // check for extra time over the divided time
			cost++;
		min /= 30; // creates cost based off of mins
		cost += min; // add on to cost based off of mins
	}
	else // last time range
	{
		min -= 420; // subtract amount from first two time slots
		cost = 14; // starts at $14 because of first two time slots
		if (min % 60 != 0) // check for extra time over the divided time
			cost++;
		min /= 60; // turn mins into cost
		cost += min; // add onto cost based off of mins
	}
	if (cost > 21) // cost does not exceed $21
		cost = 21;
	
	cout << cost;
}	
