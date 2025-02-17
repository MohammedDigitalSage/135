/******************************************************************************

Mohammed 
CSCI 135

Task A. Input validation.
Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

Example
$ ./valid
Please enter an integer: -10
Please re-enter: 1200
Please re-enter: 100
Please re-enter: 7

Number squared is 49
Hint: You can use a while or do ... while loop.

*******************************************************************************/

#include <iostream>

int main()
{
    int num;
    
    std::cout << "Please enter an integer: ";
    std::cin >> num;
    
    // Extra Requirment: Validate input using a while loop
    while (num <= 0 || num >= 100) {
        std::cout << "Please re-enter: ";
        std::cin >> num; // Read input again...and again
    }

    // Output the squared value;  a number times itself
    std::cout << "Number squared is " << num * num << std::endl;

    return 0;
}
