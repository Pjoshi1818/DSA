#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int maxGap = nums[1] - nums[0];

        for (int i = 2; i < nums.size(); i++) {
            maxGap = max(maxGap, nums[i] - nums[i - 1]);
        }

        return maxGap;
    }

};

int main() {
    Solution obj;

    vector<int> nums1 = {3,6,9,1};
    cout << "Output: " << obj.maximumGap(nums1) << endl;

    vector<int> nums2 = {10};
    cout << "Output: " << obj.maximumGap(nums2) << endl;

    return 0;
}
