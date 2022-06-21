//* Recursion - A function calling itself (generally breaks big problems into small pieces) - Recursion leap of faith
//* Recursion is made up of 3 basic steps:

//! 1. Base case
//! 2. Small calculations
//! 3. Recursion formula

//? 2 To the power of n:

#include <iostream>
using namespace std;

int twoPowerN(int n) {
    if(n == 1) return 2;
    else return 2 * twoPowerN(n - 1);
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<twoPowerN(n);
    return 0;
}