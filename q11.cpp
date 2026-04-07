#include<iostream>
using namespace std;
int main(){
    int items, discount, totalExpense;
    cin>>items;
    //let the cost of one item be 100rs.
    if(items>1000){
        totalExpense=(items*100)-((items*100)*0.1);
    }
    else{
        totalExpense=items*100;
    }
    cout<<totalExpense;
    return 0;
}