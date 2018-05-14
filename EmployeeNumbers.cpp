#include <iostream>
using namespace std;

int main()
{
	int size, number[100], index;
	string name[100], s; // declare variables
	
	cout << "How many employees? ";
	cin  >> size; // get user input
	cout << endl << "Enter employee names and numbers:" << endl;
	
	for (int i = 0; i < size; i++)
		cin >> name[i] >> number[i]; // continue getting user inout
	
	cout << endl << "Enter a name, or Quit to stop the program." << endl << "Name? ";
	cin  >> s;
	
	while (s != "Quit")
	{
		for (int i = 0; i < size; i++)
			if (s == name[i])
				index = i; // goes through name array and if equal records index
	
		cout << name[index] << " is employee number " << number[index] << endl << endl << "Name? ";
		cin  >> s;
	}
}
