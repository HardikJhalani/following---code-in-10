//* Recursion - A function calling itself (generally breaks big problems into small pieces) - Recursion leap of faith
//* Recursion is made up of 3 basic steps:

//! 1. Base case
//! 2. Small calculations
//! 3. Recursion formula

//? Print nth number of fibonacci series:

// ********** Adobe, Amazon, Mcrosoft and many more
// ********** Mathematics, fibonacci, dp

#include <iostream>
using namespace std;

int fibAtN(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibAtN(n - 1) + fibAtN(n - 2);
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<fibAtN(n)<<endl;
    return 0;
}

// ** Submission in GFG: https://practice.geeksforgeeks.org/viewSol.php?subId=b5a8203b15fd4bd49e6ec41c96fb6c68&pid=703841&user=hardikjhalani2309