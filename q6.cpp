#include<iostream>
using namespace std;
int main(){
    int salary;
    cout<<"Enter basic salary =";
    cin>>salary;
    int bonus= ((salary*12)/100);
    int b=bonus+salary;
    cout<<"Bonus="<<bonus;
    cout<<"Final salary is="<<b;
    return 0;
}