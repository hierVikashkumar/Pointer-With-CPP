#include<iostream>
using namespace std;
int main(){
    // int x = 122;
    // int* p = &x;
    // cout<<*p;

   // 2nd method
   int x = 122;
   int* p = &x;
   cout<<x<<endl;
    // update the value
    *p = 6;
    cout<<x;

}