#include<iostream>
using namespace std;
class Average{
    private:
    int marks1,marks2,marks3;
    int avg;
    public:
    void getData();
    void displayAvg();
};
void Average::getData(){
    cout<<"Enter marks1:";
    cin>>marks1;
    cout<<"Enter marks2:";
    cin>>marks2;
    cout<<"Enter marks3:";
    cin>>marks3;
}
void Average::displayAvg(){
    avg = (marks1+marks2+marks3)/3;
    cout<<"The average of the marks is:"<<avg;
}
int main(){
    Average a1;
    a1.getData();
    a1.displayAvg();
    return 0;
}