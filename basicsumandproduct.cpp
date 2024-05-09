#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	int a,m;
	cout <<"Enter 3 numbers: ";
	cin >> n1 >> n2 >> n3;
	a=n1+n2+n3;
	m=n1*n2*n3;
	cout <<"The sum is: " << a << endl;
	cout <<"The product is: "<< m << endl;
	
	a=(31*n1)+(17*n2)+(87*n3);
	cout <<"The answer is: " << a << endl;
}
