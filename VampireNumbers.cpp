#include <iostream>
using namespace std;

int countDigits(int n)
{
	//declare variables
	int digits = 0;
	//take off the last number of n until it reaches 0
	while (n > 0)
	{
		n/= 10;
		digits++;
	}
	//returns count variable which is digits
	return digits;
}

string convert(int num)
{
	//declare variables
	string result = "";
	//convert integer to string
	while (num > 0)
	{
		int digit = num % 10;
		result += digit + 48;
		num /= 10;
	}
	//return result string
	return result;
}

string sort (string num)
{
	//sort characters in string by means of insertion sort
	for (int i = 1; num[i] != 0; i++)
    {
		int pos = i;
        char value = num[pos];
        while (pos > 0 && value < num[pos-1]) 
        {
            num[pos] = num[pos-1];
            pos--;
        }
        num[pos] = value;
	}
	return num;
}

int isVampire (int num)
{
	//check to make sure amount of digits is even
	int digits = countDigits(num);
	if (digits % 2 != 0)
		return 0;
	//adds i until it creates a fang with fang
	for (int i = 1; i < num/2; i++)
	{
		int fang = num/i;
		//check trailing zeros and make sure the fangs multiply to be num
		if ((fang % 10 != 0 || i % 10 != 0) && i * fang == num)
		{	
			//check if fangs contain all digits of num
			string sfang = convert(fang) + convert(i);
			string snum = convert(num);
			//when the sorted strings are equal and they have the same amount of digits, returns one fang, i
			if (sort(sfang) == sort(snum) && countDigits(fang) == countDigits(i))
				return i;
		}
	}
	//return 0 if it makes it through the whole for loop without returning 0 prior or returning i
	return 0;
}

int main()
{
	//declare variables
	int num, fang;
	//gather input
	cout << "Enter a number: ";
	cin  >> num;
	cout << endl;
	//assign the return from to isVampire(num) to fang for future use
	fang = isVampire(num);
	//if isVampire returned 0 then it is not a vampire number
	if (fang == 0)
		cout << "No stakes needed";
	else
		cout << fang << " * " << num/fang;
}
