#include<iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout<<ptr<<endl;  // 0x543a3ffce4
    // ptr = ptr + 1;
    // cout<<ptr<<endl;  // 0x543a3ffce8

    // bool flag = true;
    // bool* ptr = &flag;
    // cout<<ptr<<endl;  // 0x26f39ffbe7
    // ptr = ptr + 1;
    // cout<<ptr<<endl;  // 0x26f39ffbe8

    // int x = 4;
    // int* ptr = &x;
    // cout<<*ptr<<endl;  // 4
    // ptr = ptr + 1;
    // cout<<*ptr<<endl;   // 985660152

    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl;  // 4
    // *ptr = *ptr + 1;   // 4 + 1
    (*ptr)++;
    cout<<*ptr<<endl;   // 5
}