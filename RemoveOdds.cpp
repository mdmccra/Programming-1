#include <iostream>
using namespace std;

void removeOdds(int A[], int& size)
{
	for (int i = 0; i < size; i++) // goes through the array
	{
		if (A[i] % 2 != 0) // checks if it is odd
		{
			for (int j = i; j < size; j++)
			{
				A[j] = A[j + 1]; // replaces the value in front of it in the array
			}	
		
			size--; // one value was deleted so size needs to be decremented
			i--;
		}
	}
}

void printArray(int X[], int n)
{
    cout << "[ " << X[0];
    for( int i = 1; i < n; i++ )
        cout << ", " << X[i];
    cout << " ]";
}

int main()
{
	int A[] = {1, 4, 6, 8, 11, 3000, -7}, size = 7;
	removeOdds(A, size);
	printArray(A, size);
}
