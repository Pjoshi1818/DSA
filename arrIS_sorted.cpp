// #include<iostream>
// #include<vector>
// using namespace std;

// bool issort(vector<int> arr , int n ){
//     if( n ==0|| n ==1){
//         return true;

//     }
//     return arr[n-1]>=arr[n-2] &&  issort(arr,n-1);

// }
// int main(){
//     vector <int> arr = { 1,2,8,4,5};
//     cout<<issort(arr, arr.size())<<endl;
//     return 0; 
// }


#include<iostream>
using namespace std;
int main(){
            int flag = 0;
            int arr[5] = {1,2,4,4,5};
            for(int i = 0 ; i<4;i++){
                if(arr[i]>arr[i+1]){
                        flag = 1;
                 
                        break;
                }
             
            }
            if(flag == 1){
                cout<<"arr is not  sorted";

            }else cout<<"arr is sorted :";
}