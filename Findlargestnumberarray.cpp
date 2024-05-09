#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float arr[100];
    cout << "Enter total number of elements(1 to 100): "; // 3
    cin >> n;
    cout << endl;
    // Store number entered by the user
    for(i = 0; i < n; ++i)                              // i=0;0<=3;0++incrementation
    {
       cout << "Enter Number " << i + 1 << " : ";		//Emter number (0+1)=1: 1 2 3
       cin >> arr[i];											//[1] [2] [3]
    }
    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)                   //i=1;1<3;1++
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])	//arr[0] (starts from first array) < arr[i] = 1 (kasunod)   //array starts from zero
           arr[0] = arr[i]; //if higher tham arr[i] .. dederive sya
    }
    cout << "Largest element = " << arr[0];
    return 0;
}
