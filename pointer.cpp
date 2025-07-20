// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     a = 85;
//     char b = a;
//     cout<<b;
//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int a = 91;          // ASCII value
    int* ptr = &a;       // Pointer to a

    char ch = *ptr;      // Convert value at pointer to char
    cout << "Value: " << *ptr << endl;
    cout << "Character: " << ch << endl;

    return 0;
}
