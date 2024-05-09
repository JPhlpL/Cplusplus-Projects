#include<iostream>
using namespace std;
int main()
{
	int arr[2][2][4];
	cout <<"Enter 12 numbers: \n";
	for(int a=0;a<2;++a)
	{
	 for(int b=0;b<3;++b)
	 {
	   for(int c=0;c<2;++c)
	   {
	   	cin >> arr[a][b][c];
	   }
	 }
	}
	
	cout <<"Display Numbers with Arrays: "<<endl;
	for(int a=0;a<2;++a)
	{
	 for(int b=0;b<3;++b)
	 {
	   for(int c=0;c<2;++c)
	   {
	   	cout << " [ "<<a<<" ] "<< " [ "<<b<<" ] "<< " [ "<<c<<" ] "<<" = "<< arr[a][b][c] << endl;
	   }
	 }
	}
	
	return 0;
}
