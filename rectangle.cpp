#include<iostream>
using namespace std;
int main()
{
	double l,w,p,a;
	cout <<"Enter width: ";
	cin >> w;
	cout <<"Enter length: ";
	cin >> l;
	
	p=2*(l+w);
	a=l*w;
	
	cout << "The perimeter is: ";
	cout.precision(3);
	cout << p << endl;
	
	cout << "The area is: ";
	cout.precision(3);
	cout << a << endl;
	
	return 0;
}
