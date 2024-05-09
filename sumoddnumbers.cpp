#include <iostream>
using namespace std;
 
int main()
{
    int i, num, sum=0;
 
   //Reading number
    cout<<"Enter any number: "<<endl;
    cin>>num;	                //enter 5
 
     for(i=1; i<=num; i+=2)		//i=1    1<=5 ----->   i=3    <---(1+2)
     {							//i=3	 3<=5 ----->   i=5    <---(3+2)							
     						    //i=5    [5<=5 true]-------	       
   //  													  |
     //													  |
     //													  |
     //													  |
     //													  |
        //Adding current even number to sum variable	  |
        sum += i;			//sum=sum+i   sum=5+2=7		  |
     }									//sum=7+2=   [9]<-|
     cout<<"Sum of all odd number between 1 to " << num << ": "<<sum;
 
    return 0;
}
