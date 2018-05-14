#include <iostream>
using namespace std;

string insertionSort(string s)
{
	//sort characters in string by means of insertion sort
	for (int i = 1; s[i] != 0; i++)
    {
		int pos = i;
        char value = s[pos];
        while (pos > 0 && value < s[pos-1]) 
        {
            s[pos] = s[pos-1];
            pos--;
        }
        s[pos] = value;
	}
	return s;
}

string justLowercaseLetters(string a)
{
	//convert all letters to lowercase and add them back to the result string
	//this effectively gets rid of all punctuation and spaces as well
	string result = "";
	
	for (int i = 0; a[i] != 0; i++)
		if (isalpha(a[i]))
			result += tolower(a[i]);
	return result;
}

bool anagrams(string a,string b)
{
	//checks to see if the two strings are equal
	a = justLowercaseLetters(a);
	b = justLowercaseLetters(b);
	
	if (insertionSort(a) == insertionSort(b))
		return true;
	return false;	
}


int main()
{
	char x = 34;
	string a, a1, b, b1;
	
	cout << "String 1: ";
	cin  >> a;
	cout << "String 2: ";
	cin  >> b;
	cout << endl;
	
	//save extra copy of original strings in case values are not saved
	a1 = a;
	b1 = b;
	
	//if anagrams returns true then the two strings are anagrams of eachother
	//if anagrams returns false then the two strings are not anagrams of eachother
	if (anagrams(a,b) == false)
		cout << x << a1 << x << " is not an anagram of " << x << b1 << x;
	else
		cout << x << a1 << x << " is an anagram of " << x << b1 << x;
}
