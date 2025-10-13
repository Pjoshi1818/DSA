#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ;




class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {

        vector<string>result;
        result.push_back(words[0]);
        unordered_map<char,int>Pq;
        for (char ch: words[0])
        {
            Pq[ch]++;
        }
for (int i = 0; i < words.size(); i++)
{
   
    unordered_map<char ,int>currFq;
    for (char ch : words[i])
    {
       currFq[ch]++;
    }
    if (Pq != currFq)
    {
        result.push_back(words[i]);
        Pq = currFq;
    }
    
    
}
return result;
    }     
};


int main() {
    Solution sol;
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};

    vector<string> result = sol.removeAnagrams(words);

    for (string s : result)
        cout << s << " ";
    cout << endl;

    return 0;
}

