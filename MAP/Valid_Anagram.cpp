#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> freq;

    // Count frequency for string s
    for (char c : s) {
        freq[c]++;
    }

    // Decrease frequency for string t
    for (char c : t) {
        freq[c]--;
    }

    // Check if all counts are zero
    for (auto p : freq) {
        if (p.second != 0) return false;
    }

    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (isAnagram(s1, s2))
        cout << "Yes, Anagram" ;
    else
        cout << "Not Anagram";

    return 0;
}
