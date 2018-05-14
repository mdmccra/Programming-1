#include <iostream>
using namespace std;

bool sumWithoutAdjacent(int A[], int sum, int goal, int size, int index)
{
	//base case
	if (index >= size)
		return sum == goal;
	//recursive call
	return sumWithoutAdjacent(A, sum + A[index], goal, size, index + 2) || sumWithoutAdjacent(A, sum, goal, size, index + 1);
}

int main()
{
	//declare variables
	int size, list[100], goal = 0;
	
	//gather user input
	cout << "How many values? ";
	cin  >> size;
	cout << "Enter numbers: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];
	cout << "Enter sum: ";
	cin  >> goal;
	cout << endl;
	
	//evaluate to see if function comes back true or false
	if (sumWithoutAdjacent(list, 0, goal, size, 0))
		cout << "Yes, there is a subset that sums to " << goal << ".";
	else
		cout << "No, there is no subset that sums to " << goal << ".";
}
