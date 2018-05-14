#include <iostream>
using namespace std;

string score(string hidden, string guess)
{
	int position = 0, color = 0; // count vairables
	char c1, c2, A[2];
	
	for (int i = 0; hidden[i] != 0; i++) // goes through string arrays
	{
		if (hidden[i] == guess[i])
		{
			position++; // adds to count if they are equal
			guess[i] = 1;
			hidden[i] = 2; // makes these different values so they cannot be used again to count color
		}	
	}
	
	for (int i = 0; guess[i] != 0; i++) // goes through hidden array
	{
		for (int j = 0; hidden[j] != 0; j++) // goes through guess array
		{
			if (guess[i] == hidden[j]) // compares arrays
			{
				color++;
				guess[i] = 3;
				hidden[j] = 4; // adds to count for color and makes it to where it cannot be counted again
			}	
		}
			
	}
	
	c1 = 48 + position;
	c2 = color + 48; // process to change to char
	
	A[0] = c1;
	A[1] = 44;
	A[2] = c2; // allows me to return both necessary values plus the comma
	
	return A;
}

int main()
{
    string secret = "BWBG";
    
    cout << score(secret,"RBRW") << endl; // should output 0,2
    cout << score(secret,"WBGB") << endl; // should output 0,4
    cout << score(secret,"BBBB") << endl; // should output 2,0
    cout << score(secret,"BWGW") << endl; // should output 2,1
    cout << score(secret,"BWGB") << endl; // should output 2,2
    cout << score(secret,"BWBG") << endl; // should output 4,0
	cout << score("RGCC","BRBR") << endl; // should output 0,1  
	cout << score("YGRB","GBYG") << endl; // should output 0,3
	cout << score("RYGY","BGRR") << endl; // should output 0,2
	cout << score("RRGB","RBRR") << endl; // should output 1,2
}
