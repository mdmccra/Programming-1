#include <iostream>
using namespace std;

int main()
{
	string stringa, stringb, stringa2, stringb2; // declare variables
	
	cout << "Enter two strings." << endl << "String 1: ";
	cin  >> stringa;
	cout << "String 2: ";
	cin  >> stringb;
	cout << endl;
	
	stringa2 = stringa;
	stringb2 = stringb; // keep original values of the strings
	
	for (int x = 0; stringa2[x] != 0; x++) // sets string to uppercase
		stringa2[x] = toupper(stringa2[x]);
		
	for (int x = 0; stringb2[x] != 0; x++) // sets string to uppercase
		stringb2[x] = toupper(stringb2[x]);
		
	if (stringa2 == stringb2) // decides whether they are equal or not
		cout << stringa << " and " << stringb << " are equal.";
	else
		cout << stringa << " and " << stringb << " are not equal.";
}
