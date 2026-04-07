#include<iostream>
using namespace std;
int main(){
    int ID;
    cin>>ID;
    if(ID % 3 == 0 && ID % 5 == 0){
        cout<<"Buzz Fuzz";
    }
    else if(ID % 5 == 0){
        cout<<"Fuzz";
    }
    else if(ID % 3 == 0){
        cout<<"Buzz";
    }
    else{cout<<"Nil";}
    return 0;
}