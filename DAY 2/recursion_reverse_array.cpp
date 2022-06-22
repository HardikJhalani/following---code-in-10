// ? Reversing an array: 

#include <iostream>
using namespace std;

int* reverse_arr (int arr[], int n, int start, int end) {
    if(start >= end) return arr;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    return reverse_arr(arr, n, start+1, end-1);
}


int main(){

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* first = reverse_arr(arr, n, 0, n - 1);
    cout<<*first;
    cout<<*(first+1);
    cout<<*(first+2);
    cout<<*(first+3);
    
    return 0;
}