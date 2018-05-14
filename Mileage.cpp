#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float initial, current, gas, mpg, sum = 0, average = 0, totalmpg;
	
	cout << "This program calculates mileage." << endl;
	cout << "Type in -1 for the odometer reading to signify the end of the program." << endl;
	cout << "Enter gallons at least once." << endl;
	cout << "Initial odometer reading: ";
	cin  >> initial;
	cout << endl;
	cout << "Current odometer reading: ";
	cin  >> current; // out side loop to get first current reading
	
	while (current != -1) // loop ends when user inputs -1
	{
		cout << "Gallons of gas purchased: ";
		cin  >> gas;
		
		current -= initial; // gives current
		mpg = current / gas; // gives mpg
		sum += current; // for the all together portion
		average += gas; //for the all together portion
		initial = sum; // resets initial value
		
		cout << "You drove " << fixed << setprecision(0) << current << " miles averaging " << setprecision(2) << mpg << " mpg." << endl << endl;
		
		cout << "Current odometer reading: ";
		cin  >> current; // at the end of loop so it stops when -1 is input
	}
	
	totalmpg = sum / average; // for the all together portion
	
	cout << fixed << "All together, you drove " << setprecision(0) << sum << " miles on " << setprecision(2) << average << " gallons of gas, averaging " << totalmpg << " mpg." << endl;
}
