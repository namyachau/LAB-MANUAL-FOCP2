#include<iostream>
using namespace std;
class leap{
    private:
    int year;
    public:
    void getData(){
        cout<<"Enter the year: ";
        cin>>year;
    }
    void displayResult(){
        if (year% 4 == 0 || year%400 == 0){
            cout<<"Leap Year";
        }
        else{cout<<"Not a leap Year";}
    }

};
int main(){
    leap a;
    a.getData();
    a.displayResult();
    return 0;
}