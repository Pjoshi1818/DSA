#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string rvw(string s)
{

    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i <= n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main()
{
    string s = "pankaj joshi";
    cout << ":-" << rvw(s);
}