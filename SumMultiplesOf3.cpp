#include <iostream>
using namespace std;

int sum3s(int n)
{
	//base case
	if (n < 3)
		return 0;
	//recursive call
	if (n % 3 == 0)
		return n + sum3s(n - 3);
	return sum3s(n - 1);
}


int main()
{
	int n;
	
	cout << "Enter number: ";
	cin  >> n;
	cout << endl << "The sum is " << sum3s(n) << ".";
}

