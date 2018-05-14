#include <iostream>
using namespace std;

int main()
{
	float l, w, d, r, p;
	
	cout << "Enter pool dimensions" << endl;
	cout << "Length: ";
	cin  >> l;
	cout << "Width: ";
	cin  >> w;
	cout << "Depth: ";
	cin  >> d;
	cout << endl;
	cout << "Water entry rate: ";
	cin  >> r;
	cout << endl;

	p = ((l * w * d) * 7.48) / r;

	cout << "The pool will fill completely in " << p << " " << "minutes";
}
