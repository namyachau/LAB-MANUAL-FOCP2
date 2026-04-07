#include<iostream>
using namespace std;
class ID{
    private:
    int digit;
    public:
    void getData(){
        cout<<"Enter the ID number:";
        cin>>digit;
    }
    void displayWord(){
        if(digit%3 == 0 && digit%5 == 0){
            cout<<"Buzz Fuzz";
        }
        else if(digit%3 == 0){
            cout<<"Buzz";
        }
        else if(digit%5 ==  0){
            cout<<"Fuzz";
        }
        else{
            cout<<"None";
        }
    }
};
int main(){
    ID a;
    a.getData();
    a.displayWord();
    return 0;
}