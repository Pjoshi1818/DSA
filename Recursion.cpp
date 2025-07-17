#include<iostream>
using namespace std;
void print(int n){
   if(n<0){
    return  ;
   } cout<<n<<" ";
    n--;
    print(n);
}
int main(){
int n ;
n=4;
print(n);
    return 0;
}