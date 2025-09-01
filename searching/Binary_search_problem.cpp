// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int bisearch(vector<int>& arr, int tar, int st, int end) {
//         if (st <= end) {
//             int mid = st + (end - st) / 2;

//             if (arr[mid] == tar) return mid;

//             else if (arr[mid] < tar) {
//                 return bisearch(arr, tar, mid + 1, end);
//             }
//             else {
//                 return bisearch(arr, tar, st, mid - 1);
//             }
//         }
//         return -1;
//     }

//     int search(vector<int>& arr, int tar) {
//         int st = 0, end = arr.size() - 1;
//         return bisearch(arr, tar, st, end);
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
//     int target = 7;

//     int result = sol.search(arr, target);

//     if (result != -1) {
//         cout << " found at : " << result << endl;
//     } else {
//         cout << " not found." << endl;
//     }

//     return 0;
// }












#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int bisearch(vector<int>& arr, int tar, int st, int end) {
        if (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == tar) return mid;

            else if (arr[mid] < tar) {
                return bisearch(arr, tar, mid + 1, end);
            }
            else {
                return bisearch(arr, tar, st, mid - 1);
            }
        }
        return -1;
    }

};

int main() {
    Solution sol;
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int tar = 7;
         int st = 0, end = arr.size() - 1;

    int result = sol.bisearch(arr, tar, st, end);

    if (result != -1) {
        cout << " found at : " << result << endl;
    } else {
        cout << " not found." << endl;
    }

    return 0;
}
