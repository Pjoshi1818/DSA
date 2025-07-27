// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
    
//         int arr[5] = {1,2,3,4,5};
//         int cs = 0;
//         int maxcs = INT_MIN;
//             for(int i= 0; i<5;i++){
//                 cs = cs+arr[i];
//                 maxcs = max(cs,maxcs);
//                 if(cs < 0){
//                     cs = 0;
//             }
//         }
//         cout<<maxcs<<endl;
    
//     return 0;
     
// }



#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
        int maxsum = INT_MIN;
        for(int st = 0;st<n;st++ ){
            int cs = 0;
            for(int end = st ; end <n ;end++){
                cs = cs+ arr[end];
                maxsum = max(cs, maxsum);
            }
        }

cout<<"maxsum is this = "<<maxsum<<endl;
    return 0;
}