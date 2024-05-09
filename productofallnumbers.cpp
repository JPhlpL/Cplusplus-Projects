#include<iostream>
using namespace std;
int main(){
	
	int prod=1,num=1,x;
	cout<<"Enter number: ";
	cin>>x;
	while(num<=x) //1<=10
	{
		prod=prod*num; 
		++num;
		
	}
	cout <<"The product of all numbers from 1 to " << x <<" is " << prod;
	return 0;
	
}
