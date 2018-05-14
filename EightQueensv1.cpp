#include <iostream>
using namespace std;

int main()
{
	int board[8]; // declare variable
	
	cout << "Enter the columns containing queens, in order by row: ";
	
	for (int i = 0; i < 8; i++) // user inputs values
	{
		cin  >> board[i];
	}
	cout << endl;
	
	for (int r = 0; r < 8; r++) // rows
	{
		for (int c = 0; c < 8; c++) // columns
		{
			if (board[r] == c) // decide if Q or . is needed
				cout << "Q";
			else
				cout << ".";
		}
		cout << endl;
	}
}
