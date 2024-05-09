#include<iostream>
using namespace std;
int main()
{
	float c;
	float f,k;
	cout <<"Enter celcius: ";
	cin >> c;
	
	f=(c*9/5)+32;
	k=c+273.15;
	cout<<"The Farenheit is: ";
	cout.precision(3) ;
	cout << f;
	cout<<" F"<<endl;
	cout<<"The Farenheit is: ";
	cout.precision(4) ;
	cout << k;
	cout<<" K"<< endl;
	

	
    
    return 0;
}
