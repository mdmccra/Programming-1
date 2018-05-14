#include <iostream>
using namespace std;

int main()
{
	char n, total, after; // declare variables
	int key; // declare variable
	
	cout << "This program encrypts a single character." << endl << endl;
	cout << "Letter: ";
	cin  >> n; // input letter
	n = toupper(n); // set it uppercase, so we do not have to deal with lowercase letters
	cout << "Key: ";
	cin  >> key; // amount the letter will change by
	cout << endl << "Result: ";
	
	total = n + key; // create a value that includes the key
	
	if (total > 90)
		after = total - 26; // subtracting 26 takes it back to the beginning of the uppercase alphabet
	else if (total < 65)
		after = total + 26; // adding 26 takes it to the end of the uppercase alphabet
	else
		after = total; // no math is needed if it is possible to change the letter by the key within the original parameters

	cout << after;
}
