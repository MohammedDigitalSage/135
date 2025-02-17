/******************************************************************************

Mohammed 
CSCI 135

Task D. Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…
First, a quick intro:
Fibonacci numbers is a sequence of numbers that starts with F(0) = 0 and F(1) = 1, 
with all the following numbers computed as the sum of two previous ones, F(n) = F(n−1) + F(n−2):

0
1
1 (=1+0)
2 (=1+1)
3 (=2+1)
5 (=3+2)
8 (=5+3)
13 (=8+5)
… and so on …

To make a C++ program to keep track of the previous numbers so that we can compute the new ones, 
we can use an array of integers:

// make an array
int fib[60];
// first two terms are given
fib[0] = 0
fib[1] = 1
// and all the following ones can be computed iteratively as
fib[i] = fib[i-1] + fib[i-2]
The task:
Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers 
from F(0) to F(59).

Example:
0 
1 
1 
2 
3 
5 
8 
13 
...
Once your program is complete and works, check carefully the values printed on the screen. 
Specifically, what is happening when the numbers approach two billions? We expect that at some point the numbers start diverging from what they should be. Describe what you observe and explain why it is happening in a program comment.



*******************************************************************************/

#include <iostream>

int main() {
    const int SIZE = 60; // Fibonacci up to F(59); 
    // we could also do const int SIZE = 59;
    // but then we have to change 'i < SIZE' to 'i <= SIZE'
    
    int num[SIZE];  // Declare an array to store Fibonacci numbers

    // Initialize the first two terms (base cases)
    num[0] = 0;
    num[1] = 1;

    // Compute Fibonacci numbers iteratively
    for(int i = 2; i < SIZE; i++) {
        num[i] = num[i - 1] + num[i - 2]; // Correct formula
        // current = prev + prev-of-prev
    }

    // Print the Fibonacci sequence
    for(int i = 0; i < SIZE; i++) {
        std::cout << num[i] << std::endl;
    }

    return 0;
}
