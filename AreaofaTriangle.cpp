#include <iostream>
using namespace std;

int main()
{
	float b, h, product;
	
	cout << "This program computes the area of a triangle." << endl;
	cout << endl;
	cout << "Enter the base of the triangle: ";
	cin  >> b;
	cout << "Enter the height of the triangle: ";
	cin  >> h;
	cout << endl;
	
	product = (b * h)/2;
	
	cout << "The area is " << product;
}
