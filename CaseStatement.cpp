#include<iostream>
using namespace std;
int main()
{  
	float x,y;
	char z;
	
	cout <<"Enter operand( + - * / ): ";
	cin >> z;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	
	switch(z){
		case '+':
			cout << x <<" + "<< y << " = " << x+y;
			break;
	
	case '-':
			cout << x <<" - "<< y << " = " << x-y;
			break;
	
	case '*':
			cout << x <<" * "<< y << " = " << x*y;
			break;
	
	case '/':
			cout << x <<" / "<< y << " = " << x/y;
			break;
	
	default:
		cout <<"Invalid operand";
		break;
	}
	return 0;
}
