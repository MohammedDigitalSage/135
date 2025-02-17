/******************************************************************************

Mohammed 
CSCI 135

Task B. Print all integers from the requested interval.
Write a program print-interval.cpp that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), and print out all integers 
in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, 
but exclude the upper limit.

Example
$ ./print-interval
Please enter L: -5
Please enter U: 10

-5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9
You can use any loop construct to achieve this result, but the most idiomatic way to 
do such an iteration in C++ is to use a for loop that starts with a counter variable 
i = L and keeps iterating while i < U:

for(int i = L; i < U; i++) {
    // the body of the loop will get executed for 
    // all values of i starting at L
    // and ending at the largest integer less than U

}
As a side note, also notice that if you change the middle condition in the loop to i <= U, 
then the iteration would go from L to U inclusive its upper bound (L ≤ i ≤ U).

Introducing arrays.
If you need to store values in a table-like fashion, C++ provides us with the array data 
structure. The following code

int myData[10];
creates an array called myData with 10 cells each storing integer values:

array illustration

The cells of the array are indexed from 0 through 9, and can be accessed by specifying 
their index in square brackets, myData[i]. You can treat arrays as tables whose elements 
can be accessed by their index. For example:

  myData[0] = 1984; // update element at index 0
  myData[7] = 1975; // update element at index 7
  myData[2] = 1966; // update element at index 2

  cout << myData[2] << endl; // print the value of the cell
                             // at the index 2 on the screen, 
                             // which is 1966.

*******************************************************************************/

#include <iostream>

int main()
{
    int L; // Lower limit (inclusive)
    int U; // Upper limit (exclusive)
    
    std::cout << "Please enter L: ";
    std::cin >> L;
    
    std::cout << "Please enter U: ";
    std::cin >> U;
    
    for (int i = L; i < U; i++) {
        std::cout << i << " ";
    }
    
    std::cout << std::endl; // Add a newline for clean output
    
    return 0;
}
