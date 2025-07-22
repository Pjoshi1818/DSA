#include<iostream>     // reverse a char arr ..
using namespace std;



int main(){

    char arr[4] = {'a','s','c','k'};


   int  start = arr[0];
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    // for(int i = 4 ; i  >= 0;i--){
    //     cout<<arr[i]<<" ";
    // }

    while(start<end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
   for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}