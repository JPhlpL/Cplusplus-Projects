#include <iostream>
using namespace std;
int main() 
{
    int numbers[5], sum = 0;
    cout << "Enter 5 numbers: ";
    
    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int a = 0; a < 5; ++a) 
    {
        cin >> numbers[a];
        sum += numbers[a];
    }
    
    cout << "Sum = " << sum << endl;  
    
    return 0;
}
