// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     void getperms(vector<int>& nums, int idx, vector<vector<int>> &ans) {
//         if (idx == nums.size()) {
//             ans.push_back(nums);
//             return;
//         }

//         for (int i = idx; i < nums.size(); i++) {
//             swap(nums[idx], nums[i]);
//             getperms(nums, idx + 1, ans);
//             swap(nums[idx], nums[i]); // backtrack
//         }
//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         getperms(nums, 0, ans);
//         return ans;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1, 2, 3}; 

//     vector<vector<int>> result = obj.permute(arr);

//     for (int i = 0; i < result.size(); i++) {
//         for (int j = 0; j < result[i].size(); j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


