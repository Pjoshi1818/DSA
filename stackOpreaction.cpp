// #include <iostream>
// #include <stack>
// using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;

//         for (int i = 0; i < s.size(); i++) {
//             // Push opening brackets
//             if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
//                 st.push(s[i]);
//             }
//             else {
//                 // If stack is empty and we found a closing bracket — invalid
//                 if (st.empty()) {
//                     return false;
//                 }

//                 // Check for matching brackets
//                 if ((st.top() == '(' && s[i] == ')') ||
//                     (st.top() == '{' && s[i] == '}') ||
//                     (st.top() == '[' && s[i] == ']')) {
//                     st.pop();  // Pop the matching opening bracket
//                 }
//                 else {
//                     return false; // Mismatched closing bracket
//                 }
//             }
//         }

//         // If stack is empty, all brackets matched correctly
//         return st.empty();
//     }
// };

// int main() {
//     Solution sol;
//     string input;
//     cout << "Enter bracket string: ";
//     cin >> input;

//     if (sol.isValid(input)) {
//         cout << "Valid bracket sequence" << endl;
//     } else {
//         cout << "Invalid bracket sequence" << endl;
//     }

//     return 0;
// }
