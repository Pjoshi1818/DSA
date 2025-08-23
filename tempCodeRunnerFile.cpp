#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void sortColors(vector<int>& nums) {
     int st;
     int pass;
     st = pass = 0;
        int end = (int)nums.size() - 1;


        while(pass<=end){
            if(nums[pass] == 0){
                swap(nums[st],nums[pass]);
                st++;
                pass++;
            }
            else if(nums[pass]==1){
                pass++;
            }
            else if(nums[pass]==2){
                swap(nums[pass],nums[end]);
                end--;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sol.sortColors(nums); 

    cout << "After sorting:  ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
