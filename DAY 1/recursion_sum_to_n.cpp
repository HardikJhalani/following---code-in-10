//* Recursion - A function calling itself (generally breaks big problems into small pieces) - Recursion leap of faith
//* Recursion is made up of 3 basic steps:

//! 1. Base case
//! 2. Small calculations
//! 3. Recursion formula

// ? Sum to N: 

#include <iostream>
using namespace std;

int sumToN (int n) {
    if(n == 1) return 1;
    if(n == 0) return 0;
    if(n < 0) return -1;
    return sumToN(n - 1) + n;
}

int main(){

    int n;
    cout<<"Enter a number upto which you want to calculate sum: ";
    cin>>n;
    cout<<sumToN(n)<<endl;
    return 0;
}