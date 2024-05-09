/*
 * Sum from 1 to an upperbound using a while-loop (SumNumbers.cpp).
 */
#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;    // Declare an int variable sum to accumulate the numbers
                   // Set the initial sum to 0
   int upperbound; // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   cout << "Enter the upperbound: ";
   cin >> upperbound;
 
   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;   // accumulate number into sum
      ++number;             // increment number by 1
   }
   // Print the result
   cout << "The sum from 1 to " << upperbound << " is " << sum << endl;
 
   return 0;
}



/**cin >> upperbound; //enter 5
int number = 1; 
while (number <= upperbound) { //1<=5 2<=5 3<=5 4<=5 5<=5
      sum = sum + number;   //sum=0+1=1
      						//sum=1+2=3
      						//sum=3+3=6	
      						//sum=6+4=10
      						//sum=10+5=15 (reach point)
      ++number (++1=2 ++2=3 ++3=4 ++4=5)
      //sum=15
   }**/
