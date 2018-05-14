#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int r, c;
	string input, s[40];
	
	//get rows and colums
	cin >> r >> c;
	
	//get location of mines and empty spaces
	for (int i = 0; i < r; i++)
	{
		cin >> input;
		s[i] = input;
	}
	
	//check surroundings of each mine
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (s[i][j] != '*')
			{
				//initialize space
				s[i][j] = '0';
				
				//top left
				if (i - 1 >= 0 && j - 1 >= 0 && s[i-1][j-1] == '*')
					s[i][j]++;
				//top center
				if (i - 1 >= 0 && s[i-1][j] == '*')
					s[i][j]++;
				//top right
				if (i - 1 >= 0 && j + 1 < c && s[i-1][j+1] == '*')
					s[i][j]++;
				//center left
				if (j - 1 >= 0 && s[i][j-1] == '*')
					s[i][j]++;
				//center right
				if (j + 1 < c && s[i][j+1] == '*')
					s[i][j]++;
				//bottom left
				if (i + 1 < r && j - 1 >= 0 && s[i+1][j-1] == '*')
					s[i][j]++;
				//bottom center
				if (i + 1 < r && s[i+1][j] == '*')
					s[i][j]++;
				//bottom right
				if (i + 1 < r && j + 1 < c && s[i+1][j+1] == '*')
					s[i][j]++;
			}
	
	cout << endl;
	
	//create result board
	for (int i = 0; i < r; i++)
		cout << s[i] << endl;
}
