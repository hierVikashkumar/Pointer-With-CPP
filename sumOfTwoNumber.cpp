#include<iostream>
using namespace std;
int main(){
    // int x=5;
    // int y=7;
    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<*p1 + *p2<<endl;/

    // 2nd method
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout << "Enter the value for x: ";
    cin >> x;
    cout<< "Enter the value for y: ";
    cin>> y;
    cout<<"The sum is : "<< (*p1 + *p2)<< endl;
}