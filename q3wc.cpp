#include<iostream>
using namespace std;
class temp{
    int celcius,farhanheit;
    public:
    void getData(){
        cout<<"Enter the temperature in farhanheit:";
        cin>>celcius;

    }
    void display(){
        farhanheit=((9*celcius)*(1/5))+32;
        cout<<"Farhanheit:"<<farhanheit;
    }
};
int main(){
    temp a;
    a.getData();
    a.display();
    return 0;
}