#include<iostream>
using namespace std;
int main(){
	
	int x,sum=0,num=1;
	cout << "Enter number: ";
	cin >> x;
	while(num<=x)
	{
		sum=sum+(num*num);
		++num;
	}
	cout <<"The answer is " << sum;
	return 0;
	
}
