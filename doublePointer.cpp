#include<iostream>
using namespace std;
int main(){
   int x = 5;
   int* ptr = &x;
   int** p = &ptr;
//    cout<<x<<endl;  // 5
//    cout<<*ptr<<endl;  //5
//    cout<<**p<<endl;  //5

//  same address
    cout<<&x<<endl;  // 0x3c927ff8e4
    cout<<ptr<<endl;  // 0x3c927ff8e4
    cout<<*p<<endl;   // 0x3c927ff8e4
}