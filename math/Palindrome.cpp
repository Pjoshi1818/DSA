
            // *****   this is a brute force approach  *************


// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         // cout<<x<<endl;
//              int rem = 0;
//              int rev = 0;
//              int temp = x;
//         while (temp != 0)
//         {
//           if (temp > 0)
//           {
//               rem = temp%10;
//             rev = rev*10+rem;
//             temp = temp/10;
//           }
//           else{
//             return false;
//           }
          
          
//         }
       
//         cout<<rev; cout<<endl;
//               cout<<x<<endl;
//         if(rev == x){
//             return true;
//         }else{
//             return false;
//         }
        
//     }
// };
// int main(){
//     Solution obj;
//     // int a = 121;
//    bool pj =  obj.isPalindrome(-121);
//    cout<<" "<<pj<<endl;
// }

//                      no.9 => opt.

class Solution {
public:
   bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return (x == rev || x == rev / 10);
}

};