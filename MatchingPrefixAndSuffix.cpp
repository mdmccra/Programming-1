#include <iostream>
using namespace std;

string matchPrefixSuffix(string a, string b)
{
	string result = "";
	int n = 0;
	
	for (int i = 0; a[n] != 0 && b[i] != 0; i++)
	{
		if (b[i] == a[n])
		{
			//concatenates the letter in common and the empty result string
			result += a[n];
			n++;
		}
		else
		{
			//empties result string and resets value of n to 0
			
			/*else statement is only used when there are two of the same letter in the
			  second string and you only want the second of the two letters within that string */
			result = "";
			n = 0;
		}
	}
	//returns result string which only contains the matching prefix and suffix
	return result;
}

int main()
{
   string word1, word2;
   cout << "Enter strings: ";
   cin >> word1 >> word2;
   
   string match = matchPrefixSuffix(word1,word2);
   if( match == "" ) // empty string
      cout << "There is no matching prefix and suffix" << endl;
   else
      cout << "The longest match is \"" << match << "\"" << endl;
}
