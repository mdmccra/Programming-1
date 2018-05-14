#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	int size, A[40] = {0}, max = 0;
	
	//gather size
	cout << "Number of values to graph: ";
	cin  >> size;
	
	//gather the input values
	for (int i = 0; i < size; i++)
		cin >> A[i];
	cout << endl;

	//find max
	for (int i = 0; i < size; i++)
		if (A[i] > max)
			max = A[i];
	
	//create graph
	for (int r = max; r > 0; r--)
	{
		for (int c = 0; c < size; c++)
		{
			if (A[c] >= r)
			{
				cout << "  #";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	
	//create --- between bars and titles
	for (int i = 0; i < size; i++)
		cout << "---";
	cout << endl;
	
	//create titles for bars	
	for (int i = 0; i < size; i++)
		cout << fixed << setw(3) << A[i];
}
