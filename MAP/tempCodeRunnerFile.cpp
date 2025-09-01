// #include<iostream>
// #include <map>;
// using namespace std;
// int main(){

//     map<int,string>m;
//     m[3]= "raja";
//     m[2]= "ji";
//     m[1]= "ok";

//     for(auto p : m){
//         cout<<p.first<<"->"<<p.second;
//     }
//     return 0;
// }



#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int num = nums[i];
            freq[num]++;

         
            
            for(auto p : freq){
                cout << p.first << "->" << p.second << " ";
            }
          cout<<endl;

            if(freq[num] > n/2){
                return num; 
            }
        }
        return -1; 
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;
    int ans = obj.majorityElement(nums);

    cout << "\nMajority Element = " << ans << endl;
    return 0;
}
