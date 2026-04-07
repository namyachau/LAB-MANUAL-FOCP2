#include<iostream>
using namespace std;
class solve{
    int itemno, unitprice, quantity, final;
    public:
    void getData(){
        cin>>itemno>>unitprice>>quantity;
    }
    void displayResult(){
        final=(quantity*unitprice)-((quantity*unitprice)*0.2);
        cout<<final;
    }
};
int main(){
    solve a;
    a.getData();
    a.displayResult();
    return 0;
}