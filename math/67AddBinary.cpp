// // #include<iostream>
// // using namespace std ;
// // class Solution {
// // public:

// //         int Binary(int res){
// // 	int ans = 0,pow=1;
// // 	while(res>0){
// // 		int rem = res%2;
// // 		res /=2;
		
// // 		ans+=(rem * pow);
// // 		pow *=10;
// // 	}
// //     // cout<<ans;
// // 	return ans;
// // }

// //     string addBinary(string a, string b) {

// //           int ans1 = 0;
// //           int ans2 = 0;
// //     int pow1 = 1;
// //     int pow2 = 1;

// //     // Loop from right to left
// //     for (int i = a.size() - 1; i >= 0; i--) {
// //         int bit = a[i] - '0'; // convert char to int
// //         ans1 += bit * pow1;
// //         pow1 *= 2;
// //     }
// //     for (int i = b.size() - 1; i >= 0; i--) {
// //         int bit = b[i] - '0'; // convert char to int
// //         ans2 += bit * pow2;
// //         pow2 *= 2;
// //     }
// //     int res = ans1 + ans2;
// //   res =   Binary(res);
// // return to_string(res);

// //     }
// // };
// // int main(){
// //  Solution sol ;

// //  cout<<sol.addBinary("111" , "1")<<endl;






// //     return 0 ;
// // }

// #include <iostream>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     string Binary(int res) {
//         if (res == 0) return "0";
//         string ans = "";
//         while (res > 0) {
//             int rem = res % 2;
//             ans = char(rem + '0') + ans;  // build string from right to left
//             res /= 2;
//         }
//         return ans;
//     }

//     string addBinary(string a, string b) {
//         int ans1 = 0, ans2 = 0;
//         int pow1 = 1, pow2 = 1;

//         for (int i = a.size() - 1; i >= 0; i--) {
//             int bit = a[i] - '0';
//             ans1 += bit * pow1;
//             pow1 *= 2;
//         }
//         for (int i = b.size() - 1; i >= 0; i--) {
//             int bit = b[i] - '0';
//             ans2 += bit * pow2;
//             pow2 *= 2;
//         }

//         int res = ans1 + ans2;
//         return Binary(res);
//     }
// };

// int main() {
//     Solution sol;
//     cout << sol.addBinary("111", "1") << endl; // Expected output: 1000
//     return 0;
// }



