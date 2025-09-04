#include<iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) { 
       unordered_map<char,int> fq1;
       unordered_map<char,int> fq2;

       for(char st : s){     
        fq1[st]++;
       }
       for(char pt: t){
        fq2[pt]++;
       }
       
       cout << "Map for string s:" << endl;
       for(auto p: fq1){
           cout << p.first << " " << p.second << endl;
       }

       cout << "Map for string t:" << endl;
       for(auto p: fq2){
           cout << p.first << " " << p.second << endl;
       }

       return true;
    }
};

int main(){
    Solution obj;
    string s = "foo";
    string t = "saa";
    obj.isIsomorphic(s , t); 
    return 0;
}
