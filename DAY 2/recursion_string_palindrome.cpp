// ? Check if a string is a palindrome or not:

// ******** Amazon, Cisco, Facebook, Paytm
// ******** Strings

#include <iostream>
using namespace std;

bool isPalindrome (string name, int start, int end) {
    if(start >= end) return true;
    if(name[start] == name[end]) {
        return isPalindrome(name, start+1, end-1);
    }
    return false;
}

int main(){

    string name;
    cout<<"Enter a string to check if it is a palindrome or not: ";
    cin>>name;
    if(isPalindrome(name, 0, name.length() - 1)) {
        cout<<"The string is a palindrome"<<endl;
    }
    else{
        cout<<"The given string is not a palindrome"<<endl;
    }
    return 0;
}

// ** My GFG Submission : https://practice.geeksforgeeks.org/viewSol.php?subId=0017126715ff2506decd3595f48d87c9&pid=703439&user=hardikjhalani2309