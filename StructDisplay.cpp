#include<iostream>
#include<string>
using namespace std;

struct Info
{
	string name;
	string subj;
	string school;
	int age;
	float grade;
};

int main()

{
	Info stud;
	
	cout <<" Display Information with Grade " << endl;
	
	cout <<" Enter your name: ";
	cin >> stud.name;
	
	cout <<" Enter your age: ";
	cin >> stud.age;
	
	cout <<" Enter your School name: ";
	cin >> stud.school;
	
	cout <<" Enter your subject: ";
	cin >> stud.subj;
	
	cout <<" Enter your subject grade: ";
	cin >> stud.grade;
	
	cout <<"\n Display Info Dashboard";
	
	cout <<" Name: " << stud.name << endl 
		 <<" Age: " << stud.age << endl 
		 <<" School Name: "<<stud.school << endl
		 <<" Subject: " << stud.subj << endl 
		 <<" Grade: " << stud.grade << endl ;
	
	return 0;
}
