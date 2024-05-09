#include<iostream>
using namespace std;
int main()
{
	int x,sum=0;
	cout << "Enter number: ";
	cin >> x;							//enter 5
	
	int number=1;						//n=1
	while(number<=x)					//1<=5
	{
		sum=sum+number;					
		number=number + 3 ;
	}
	cout <<"The addition off odd number from 1 to " << x <<" is "<< sum;
	
}
