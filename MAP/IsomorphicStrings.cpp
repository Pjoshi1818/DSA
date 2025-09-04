#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    

        unordered_map<char, char> maps;
        unordered_map<char, char> map_t; 

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

             if (maps.count(c1)) {
                if (maps[c1] != c2) return false;
            } else {
                maps[c1] = c2;
            }

           
            if (map_t.count(c2)) {
                if (map_t[c2] != c1) return false;
            } else {
                map_t[c2] = c1;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;

    string s = "foo";
    string t = "saa";

    if (obj.isIsomorphic(s, t)) {
        cout << "Yes, Iso" << endl;
    } else {
        cout << "Not Iso "<< endl;
    }

    return 0;
}
