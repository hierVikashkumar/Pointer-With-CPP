#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int* ptr = &a;
    // int b = ++(*ptr);  // a--> 16, b--> 16
    int b = (*ptr)++;  // a--> 16, b--> 15
    cout<<a<<" "<<b<<endl;
}