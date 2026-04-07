#include<iostream>
using namespace std;
class Calculator{           
    int num1; 
    int num2;
    int type;
    public:
    void getData(){
        cin>>num1>>num2>>type;    //1-add, 2-sub, 3-mult, 4-div, 5-mod
    }
    void displayResult(){
        if(type==1){
            cout<<num1+num2;
        }
        else if(type==2){
            cout<<num1-num2;
        }
        else if(type==3){
            cout<<num1*num2;
        }
        else if(type==4){
            cout<<num1/num2;
        }
        else{cout<<num1%num2;}
    }
};
int main(){
    Calculator a;
    a.getData();
    a.displayResult();
    return 0;
}