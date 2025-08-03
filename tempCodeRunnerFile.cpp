#include<iostream>
using namespace std;
int main(){
    string pj = "pankaj joshi";
    int start = 0;
    int end = pj.length()-1;
    // cout<<end;

    while(start <= end){
        swap(pj[start],pj[end]);
        start++;
        end--;

    }

    cout<<pj<<endl;
}