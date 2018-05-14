#include <iostream>
using namespace std;

bool equalSums(int A[], int size, int index, int fives, int threes)
{
	//base case
	if (index == size)
		return threes == fives;
	//recursive call
	if (A[index] % 5 == 0)
		return equalSums(A, size, index + 1, fives + A[index], threes);
	if (A[index] % 3 == 0)
		return equalSums(A, size, index + 1, fives, threes + A[index]);
	return (equalSums(A, size, index + 1, fives + A[index], threes) || equalSums(A, size, index + 1, fives, threes + A[index]));
}

int main()
{
	int A[100], size;
	
	cout << "How many values? ";
	cin  >> size;
	cout << "Enter numbers: ";
	
	for (int i = 0; i < size; i++)
		cin >> A[i];
	
	cout << endl;
	
	if (equalSums(A, size, 0, 0, 0))
		cout << "Yes, there are two equal subgroups.";
	else
		cout << "No, there are not two equal subgroups.";
}
