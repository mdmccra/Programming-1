#include <iostream>
using namespace std;

int main()
{
    int x, y, z, product;

    cout << "This program adds two numbers, then divides them by a third number" << endl;

    cout << "1st number? ";
    cin  >> x;
	cout << "2nd number? ";
	cin  >> y;
	cout << "3rd number? ";
	cin  >> z;

	product = (x+y)/z;
	
	cout << "The total is " << product << ".";

}
