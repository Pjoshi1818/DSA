#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    // Optional    we can use inbuild STL function for this ---- isalnum()  ---
    bool isAlphaNumeric(char c) {
        return ( (c >= 'a' && c <= 'z') ||
                 (c >= 'A' && c <= 'Z') ||
                 (c >= '0' && c <= '9') );
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while(st < end){
            // Skip non-alphanumeric from front
            while(st < end && !isalnum(s[st])){
                st++;
            }

            // Skip non-alphanumeric from back
            while(st < end && !isalnum(s[end])){
                end--;
            }

            // Compare lowercase characters
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }

            st++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string  ==   palindrome: ";
    getline(cin, input);

    if(sol.isPalindrome(input)){
        cout << " It is a  a palindrome." << endl;
    } else {
        cout << "  Not a palindrome." << endl;
    }

    return 0;
}
