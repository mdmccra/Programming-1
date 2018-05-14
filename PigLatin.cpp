#include <iostream>
using namespace std;

bool isVowel(char c)
{
	//returns true if the charater is a non-y vowel
	//returns false if the character is not a non-y vowel
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}

string PigLatinize(string p)
{
	string result = "", suffix = "-";
	int n = 1;
	
	if (isVowel(p[0]))
	{
		/*if 1st character is a vowel, suffix gets the correct ending
		  and the character is added to the result string through concatenation */
		suffix += "yay";
		result += p[0];
	}
	else
	{
		suffix += p[0];		
		while (!isVowel(p[n]) && p[n] != 'y' && p[n] != 0)
		{
			//adds on to suffix until it hits a vowel, y, or gets to the end of the string
			suffix += p[n];
			n++;
		}

		suffix += "ay";
	}
	
	for (int i = n; p[i] != 0; i++)
	{
		//adds back on to the result string
		result += p[i];
	}
	
	//returns both strings combined to create pig latin word
	return result + suffix;
}

int main()
{
	string e = "";
	
	cout << "English: ";
	cin  >> e;
	
	while (e != "quit")
	{
		cout << "Pig Latin: " << PigLatinize(e) << endl << "English: ";
		cin  >> e;
	}
}
