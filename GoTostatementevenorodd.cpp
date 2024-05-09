#include <iostream>
using namespace std;
void check(int x)
{
	if(x % 2 == 0){
		goto even;
	}
	else
	{
		goto odd;
	}
	
	even:
		cout<<x<<" is Even number";
		return;
	odd:
		cout<<x<<" is Odd number";
		return;
}
int main() {
	
	int x;
	cout <<"Enter a number: ";
	cin >> x;
    check(x);
   return 0;
}


