/*
Author: Mohammed Uddin
Course: CSCI-135
Assignment: E4.8

A program that reads a word and prints each word on a seperate line.

User Input: "Hey"
Output:
H
e
y
*/

#include <iostream>
using namespace std;

int main()
{
  string word_taker;
  int word_lenght;
  
  cout << "Enter a word: ";
  getline(cin, word_taker);
  word_lenght = word_taker.size();

  for(int i = 0; i < word_taker.size(); i++) {
    cout << word_taker[i] << "\n";
  }

return 0;
