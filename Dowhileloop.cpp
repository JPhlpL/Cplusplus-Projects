#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;    
                  
   int upperbound; 
 

   cout << "Enter the upperbound: ";
   cin >> upperbound;
 

   int number = 1;
   do{
      sum = sum + number;   
      ++number;             
   }  while (number <= upperbound);

   cout << "The sum from 1 to " << upperbound << " is " << sum << endl;
 
   return 0;
}


