#include<iostream>
using namespace std;
int main(){
	int x,y,s,d,p,q;
	cout <<"Sum, Difference, Product, and Quotient\n";
	cout <<"Enter first number: ";
	cin >> x;
	cout <<"Enter second number: ";
	cin >> y;
	
	s=x+y;
	d=x-y;
	p=x*y;
	q=x/y;
	
	cout<<"The sum is: " << s << endl;
	cout<<"The difference is: " << d << endl;
	cout<<"The product is: " << p << endl;
	cout<<"The quotient is: " << q << endl;
	
	return 0;
}
