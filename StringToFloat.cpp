#include <iostream>
using namespace std;

float stringToFloat(string s)
{
	//starts at the decimal and moves to the left
	float multiplier = .1, sum = 0, converted;
	bool negative = false;
	
	for (int i = 0; s[i] != '.' && s[i] != 0; i++)
	{
		/*checks if number is negative and how mnay values
		to the left of the decimal*/
		if (s[i] != '-')
			multiplier *= 10;
		else
			negative = true;
	}

	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] != '.' && s[i] != '-')
		{
			//converts char to float
			converted = s[i] - 48;
			converted *= multiplier;
			sum += converted;
			multiplier /= 10;
		}
	}
	
	if (negative)
		//converts to negative
		sum *= -1;

	return sum;
}

int main()
{
	string s;
	char c = 34;
	
	cout << "Enter string: ";
	cin  >> s;
	cout << endl << "The string " << c << s << c << " becomes the float " << stringToFloat(s);
}
