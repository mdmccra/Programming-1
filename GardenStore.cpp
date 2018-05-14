#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout << "How many plants are you purchasing? ";
	cin  >> x; // user enters amount of plants being purchased
	cout << endl;
	
	if (x < 0) // no negative integers because the value of plants cannot be negative
		cout << "That's impossible!";
	else if (x > 25)
	{
		y = (6 * (x - 25)) + 200; // price per plant multiplied by the amount of plants after 25 plus the cost of the first 25 plants
		cout << "That will cost $" << y;
	}
	else if (x <= 25 && x > 15)
	{
		y = (7 * (x - 15)) + 130; // price per plant multiplied by the amount of plants between 15 and 25 (inclusive) plus the cost of the first 15 plants
		cout << "That will cost $" << y;
	}
	else if (x <= 15 && x > 5)
	{
		y = (8 * (x - 5)) + 50; // price per plant multiplied by the amount of plants between 5 and 15 (inclusive) plus the cost of the first 5 plants
		cout << "That will cost $" << y;
	}
	else if (x <= 5 && x > 0)
	{
		y = 10 * x; // price per plant multiplied by the amount of plants for the first 5 plants
		cout << "That will cost $" << y;
	}
}
