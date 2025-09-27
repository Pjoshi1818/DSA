#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string version = "1.0.3.5";
    vector<string> parts;
    string token;
    stringstream ss(version);

    while (getline(ss, token, '.')) {  // split 
        parts.push_back(token);
    }

   
    for (string s : parts) cout << s << " ";
}
