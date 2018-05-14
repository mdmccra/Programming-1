#include <iostream>
using namespace std;

float mean(int list[], int size)
{
	float sum = 0;
	
	for (int i = 0; i < size; i++)
		sum += list[i];
	return sum / (float) size;
}

float median(int list[], int size)
{
	if (size % 2 == 0)
		return (((float)list[size/2] - (float)list[(size/2)-1]) / 2) + (float)list[(size/2)-1];
	return list[(size/2)];
}

int mode(int list[], int size)
{
	int count = 0, high = 0, a = 0;
	for (int i = 0; i < size; i++)
	{
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if (list[i] == list[j])
				count++;
		}
		
		if (count > high || (count == high && list[i] > a))
		{
			high = count;
			a = list[i];
		}
		
	}
	return a;
}

int range(int list[], int size)
{
	return list[size-1] - list[0];
}

int unique(int list[], int size)
{
	//declare variables
	int count = 0;
	bool unique = true;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
			if (list[i] == list[j])
				unique = false;
		if (unique)
			count++;
		unique = true;
	}
	return count;
}

int main()
{
	//declare variables
	int size, list[500] = {0}, modelist[500] = {0};
	
	//gather input
	cout << "How many numbers? ";
	cin  >> size;
	cout << "Enter numbers: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];
	for (int i = 0; i < size; i++)
		modelist[i] = list[i];
	
	//sort list by insertion sort
	for (int i = 1; i < size; i++)
    {
        int pos = i;
        int value = list[pos];
        while (pos > 0 && value < list[pos-1]) 
        {
            list[pos] = list[pos-1];
            pos--;
        }
        list[pos] = value;
    }
    
	//output all values
	cout << endl << "The mean value is " << mean(list, size);
	cout << endl << "The median value is " << median(list, size);
	cout << endl << "The mode value is " << mode(modelist, size);
	cout << endl << "The list range is " << range(list, size);
	cout << endl << "There are " << unique(list, size) << " unique values";
}
