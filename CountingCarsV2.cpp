#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	string s, color[100] = "";
	int sum = 0, arraycount = 0, count[100] = {0};
	bool unique = true;
	
	cout << "This program counts cars by color.\nUse 'quit' to stop.\n";
	cin  >> s;
	
	while (s != "quit")
	{
		//adds to sum and decides if color is unique
		sum++;
		for (int i = 0; color[i] != ""; i++)
			if (s == color[i])
			{
				unique = false;
				count[i]++;
			}
				
		if (unique)
		{
			//adds string to new array if unique
			color[arraycount] = s;
			arraycount++;	
		}

		//reset unique to false and gather next input
		unique = true;
		cin >> s;
	}

	cout << endl << fixed << setw(1) << sum << " cars recorded\n\n";
	
	//output loop
	for (int i = 0; color[i] != ""; i++)
		cout << fixed << setw(2) << count[i] + 1 << " " << color[i] << endl;

}
