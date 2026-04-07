#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three marks:";
    cin>>a>>b>>c;
    int d=(a+b+c);
    int e=d/3;
    cout<<"The sum is "<< d;
    cout<<"The avg is "<< e;
    return 0;
}