// #include<iostream>
// using namespace std;
// void fec(int n){
//    if(n<0){
//     return;
//    }

//     cout<<n<<" ";
//     fec(n-1);
// }
// int main(){
// int n ;
// n=4;
// fec(n);
//     return 0;
// }


// factorial 


// #include<iostream>
// using namespace std;
// int fec(int n){
//         if(n==0){
//             return 1;   
//         }
//         return n* fec(n-1);
// }
// int main(){
// int n ;
// n=4;
// cout<<fec(n)<<"  ";
//     return 0;
// }



                                 // fibonacci


                                 #include<iostream>
                                 using namespace std;
                                 int fibo(int n ){
                                    if(n==0||n==1)
                                    return n;

                                    return fibo(n-1) + fibo(n-2);
                                 }

                                 int main(){
                                   cout<< fibo(7);
                                    return 0;
                                 }