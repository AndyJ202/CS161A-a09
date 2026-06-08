/******************************************************************************
# Author:           Andy Joy
# Assignment:       Assignment 9
# Date:             06/07/2026
# Description:      This program takes how many positive integers the user 
#                   wants to process, then loops to gather the desired amount. 
#                   Once all data has been collected, the program will output 
#                   the max, min, and position of said values.
# Input:            num (int), userVal (int).
# Output:           i (int), numMin (int), numMax (int), minValPosition (int),
#                   maxValPosition (int).
# Sources:          N/A
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function prototypes
void welcomeMessage();
void goodByeMessage();
void getInput(int &num);
void doStats(int num);

//Main function
int main() {
  int numIntegers = 0;

  welcomeMessage();
  cout << "\nHow many positive integers do you want to process? ";
  getInput (numIntegers);
  if (cin && numIntegers > 0) {  //Data validation
    doStats (numIntegers);
  }
  else {
    cout << "\nNo integers were entered." << endl;
  }
  goodByeMessage();

  return 0;
}

void welcomeMessage() {
  cout << "Welcome to my Final Exam Practice." << endl;
}

void goodByeMessage(){
  cout << "\nThank you for using my program." << endl;
}

//Get user inputs, create prompts, calculate final output, and final output
void getInput(int &num) {
  cin >> num;
}

// Get all integer values
void doStats(int num) {
  int userVal = 0;
  int numMax = 0;
  int numMin = 0;
  int maxValPosition = 0;
  int minValPosition = 0;
  int i = 0;
  
  for (i = 1; i <= num; i++) {
    cout << "Enter integer #" << i << ": "; 
    cin >> userVal;
    while (userVal <= 0) {
      cout << "Enter a positive integer!" << endl;
      cout << "Enter integer #" << i << ": "; 
      cin >> userVal;
    }
    if (userVal > numMax) {
      numMax = userVal;
      maxValPosition = i;
    }
    if (userVal < numMin || numMin == 0) {
      numMin = userVal;
      minValPosition = i;
    }
  }
  cout << "The minimum number entered was " << numMin << " entered in position "<< minValPosition << "." << endl;
  cout << "The maximum number entered was " << numMax << " entered in position "<< maxValPosition << "." << endl;
}