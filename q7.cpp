#include<iostream>
using namespace std;
int main(){
    int a,b,c;//the scores of 3 players
    cin>>a>>b>>c;
    if(a>c && a>b){
        cout<<"Player 1";
    }
    else if(b>a && b>c){
        cout<<"Player 2";
    }
    else if(c>a && c>b){
        cout<<"Player 3";
    }
    else{cout<<"none";}
    return 0;
}