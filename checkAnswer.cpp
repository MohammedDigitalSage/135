// #include <iostream>
// #include <string>

// Mohammed U.
// CSCI 13500
// This is a match-making or exact string matching type of question.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Define the questions and expected answers:

    // Question 1; if they match, we output "True," else we output "False"
    string question1 = "What is -1 + 5 / 3 ?";
    string expected_answer1 = "0";

    // Question 2; if they match, we output "True," else we output "False"
    string question2 = "Assume that n is properly declared and initialized. Write a condition to represent that n does NOT satisfy 0 < n < 100.";
    string expected_answer2 = "(n <= 0 || n >= 100)";

    string user_answer;

    // First question
    cout << question1 << endl; // "What is -1 + 5 / 3 ?"
    cout << "Your Answer: ";
    getline(cin, user_answer);

    if (user_answer == expected_answer1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    // Second question
    cout << endl;
    cout << question2 << endl; // "Assume that n is properly declared and initialized. Write a condition to represent that n does NOT satisfy 0 < n < 100.";
    cout << "Your Answer: ";
    getline(cin, user_answer);

    if (user_answer == expected_answer2) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
