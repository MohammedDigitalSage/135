#include <iostream>
#include <string>

// Mohammed U.
// CSCI 13500

using namespace std;

int main() {
    // Defining the questions and expected answers; check if string questionX = string expected_answerX
    string question1 = "What is -1 + 5 / 3 ?";
    string expected_answer1 = "0";

    string question2 = "Assume that n is properly declared and initialized. Write a condition to represent that n does NOT satisfy 0 < n < 100.";
    string expected_answer2 = "(n <= 0 || n >= 100)";

    // Take user input and check if it matches exactly
    string user_answer;
    
    // Check if string questionX = string expected_answerX
    // If it does, then "True"
    // If it does not, then "False"

    cout << question1 << " ";
    getline(cin, user_answer); // this reads the entire line
    if (user_answer == expected_answer1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    cout << question2 << " ";
    getline(cin, user_answer); 
    if (user_answer == expected_answer2) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
