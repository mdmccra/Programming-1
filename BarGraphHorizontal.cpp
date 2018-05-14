#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, a[40]; // declare variables
	
	cout << "Number of values to graph: ";
	cin  >> n;
	
	for (int i = 0; i < n; i++) // input loop
	{
		cin >> a[i];
	}
	cout << endl;
	
	for (int i = 0; i < n; i++) // outputs everything except #
	{
		cout << setw(2) << a[i] << " | ";
		
		for (int pound = 0; pound < a[i]; pound++) // outputs #
		{
			cout << "#";
		}
		cout << endl;
	}
}
