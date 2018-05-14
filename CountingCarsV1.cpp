#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int red = 0, blue = 0, green = 0, white = 0, sum; // variables
	string s; // variable
	
	cout << "This program counts cars by color." << endl;
	cout << "Use 'quit' to stop." << endl;
	cin  >> s; // input quit or car color
	
	while (s != "quit") // loops until users inputs quit
	{
		if (s == "red")
			red++; // adds 1 to red count if red
		if (s == "blue")
			blue++; // adds 1 to blue count if blue
		if (s == "white")
			white++; // adds 1 to white count if white
		if (s == "green")
			green++; // adds 1 to green count if green
			
		cin >> s; // allows user to input next color or quit
	}
	
	sum = green + blue + red + white; // creates total cars recorded number
	
	cout << sum << " cars recorded" << endl;
	cout << endl;
	cout << "Color     Count" << endl;
	cout << "--------  -----" << endl;
	cout << "red" << setw(12) << red << endl; // outputs amount of red cars
	cout << "white" << setw(10) << white << endl; // outputs amount of white cars
	cout << "blue" << setw(11) << blue << endl; // outputs amount of blue cars
	cout << "green" << setw(10) << green; // outputs amount of green cars
}
