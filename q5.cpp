#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two values";
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Swapped:"<<a<<b;
    return 0;
}