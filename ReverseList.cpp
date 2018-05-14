#include <iostream>
using namespace std;

int main()
{
	float value[100]; // variable
	int count = 0; // variable
	
	cout << "This program repeats numbers the user enters in reverse. Use -1 to end." << endl << endl << "Number: ";
	cin  >> value[0]; // enter first value before loop in case it is -1
	
	for (int i = value[0]; i != -1; i = value[count]) // allows user to input numbers and records them
	{
		count++;
		cout << "Number: ";
		cin  >> value[count];
	}
	count--; // count is added one extra time on the last run through the loop
	cout << "Numbers entered in reverse: ";
	
	for (int x = count; x >= 0; x--) // givs numbers in reverse until x reaches 0
	{
		cout << value[x] << " ";
	}
}
