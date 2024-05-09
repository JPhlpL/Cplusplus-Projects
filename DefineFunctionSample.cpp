#include<iostream>
using namespace std;
int add(int,int);
int mi(int,int);
int mul(int,int);
int div(int,int);

int main(){
	float n1,n2,s,d,p,q;
	char a;
	enter:
	cout <<"Enter operand ( + - * / ): ";
	cin >> a;
	
	switch(a){
	
		case '+':
			cout <<"Enter two numbers: ";
			cin >> n1 >> n2;
			s = add(n1,n2);
			cout<<n1<<" + "<<n2<<" = "<< s;
			break;
		case '-':
			cout <<"Enter two numbers: ";
			cin >> n1 >> n2;
			d = mi(n1,n2);
			cout<<n1<<" - "<<n2<<" = "<< d;
			break;
		case '*':
			cout <<"Enter two numbers: ";
			cin >> n1 >> n2;
			p = mul(n1,n2);
			cout<<n1<<" * "<<n2<<" = "<< p;
			break;
		case '/':
			cout <<"Enter two numbers: ";
			cin >> n1 >> n2;
			q = div(n1,n2);
			cout<<n1<<" / "<<n2<<" = "<< q;
			break;
		default:
			cout<<"Invalid Operand \n";
			goto enter;
		}
	return 0;
}



int add(int x,int y){
	int add;
	add = x+y;
	return add;
}
int mi(int x,int y){
	int mi;
	mi = x-y;
	return mi;
}
int mul(int x,int y){
	int mul;
	mul = x*y;
	return mul;
}
int div(int x,int y){
	int div;
	div = x/y;
	return div;
}
