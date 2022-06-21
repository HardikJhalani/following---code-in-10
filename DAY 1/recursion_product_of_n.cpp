//* Recursion - A function calling itself (generally breaks big problems into small pieces) - Recursion leap of faith
//* Recursion is made up of 3 basic steps:

//! 1. Base case
//! 2. Small calculations
//! 3. Recursion formula

// ? Product to N: 

//************ Samsung, Wipro, Mor Stanley
//************ Mathematics

#include <iostream>
using namespace std;

int productToN (int n) {
    if(n == 1 || n == 0) return 1;
    return productToN(n - 1) * n;
}

int main(){

    int n;
    cout<<"Enter a number upto which you want to calculate product: ";
    cin>>n;
    cout<<productToN(n)<<endl;
    return 0;
}