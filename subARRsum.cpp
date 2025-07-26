#include<iostream>
#include<climits>
using namespace std;
int main(){
    
        int arr[5] = {1,2,3,4,5};
        int cs = 0;
        int maxcs = INT_MIN;
            for(int i= 0; i<5;i++){
                cs = cs+arr[i];
                maxcs = max(cs,maxcs);
                if(cs < 0){
                    cs = 0;
            }
        }
        cout<<maxcs<<endl;
    
    return 0;
     
}