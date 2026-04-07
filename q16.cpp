#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    for(int i=2;i<100;i++){
        if(num%i==0 && num!=i){
            cout<<"no";
            count++;
            break;}
       
    }
    if(count<1){cout<<"Prime";}
    return 0;
}