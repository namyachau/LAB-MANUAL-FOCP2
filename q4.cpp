#include<iostream>
using namespace std;
int main(){
    int c,i,q,a;
    cout<<"Enter the cost and quantity respectively=";
    cin>>c>>q;
    cout<<"Enter item no.=";
    cin>>i;
    a=q*c*(0.2);
    cout<<"The amount is="<<a;
    return 0;
}