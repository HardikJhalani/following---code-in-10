//* Recursion - A function calling itself (generally breaks big problems into small pieces) - Recursion leap of faith
//* Recursion is made up of 3 basic steps:

//! 1. Base case
//! 2. Small calculations
//! 3. Recursion formula

// ? Ways to reach nth stair: 

// ********** Amazon, Microsoft, Flipkart, Adobe
// ********** Sliding window, DP, Mathematical

#include <iostream>
using namespace std;

int number_of_steps(int n) {
    if(n == 1 || n == 2) return n;
    return number_of_steps(n - 1) + number_of_steps(n - 2);
}

int main(){

    int n;
    cout<<"Enter the number of steps: ";
    cin>>n; 
    cout<<number_of_steps(n)<<endl;  
    return 0;
}

// ** Submission on GFG : https://practice.geeksforgeeks.org/viewSol.php?subId=1ee2ec12f3de350c050484c985718afc&pid=701418&user=hardikjhalani2309