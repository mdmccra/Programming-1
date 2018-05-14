#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	
	cout << "This program converts seconds into hours, minutes and seconds." << endl;
	cout << "Enter the number of seconds: ";
	cin  >> s;
	
	h = s / 3600;
	s = s - (h * 3600);
	m = s / 60;
	s = s - (m * 60);
	
	cout << "This corresponds to " << h << " " << "hours, " << m << " " << "minutes, and " << s << " " << "seconds.";
	
}
