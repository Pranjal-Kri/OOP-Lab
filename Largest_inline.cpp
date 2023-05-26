//Design a C++ program to find the largest of 3 numbers using inline functions.

#include <iostream> //  header file
using namespace std;

inline int findLargest(int a, int b, int c)
{
    // inline function used
    return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}
// main function
int main()
{ 
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    // taking input from user
    cin >> num1 >> num2 >> num3;
    // calling the inline function
    int largest = findLargest(num1, num2, num3);
    // printing the largest value
    cout << "The largest number is: " << largest << endl;

    return 0;
}