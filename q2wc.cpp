#include<iostream>
using namespace std;
class area{
    private:
    int radius,area;
    public:
    void getData();
    void displayArea();
};
void area::getData(){
    cout<<"Enter radius:";
    cin>>radius;
}
void area::displayArea(){
    area=radius*radius*3.14;
    cout<<"The total area is="<<area;
}
int main(){
    area c1;
    c1.getData();
    c1.displayArea();
    return 0;
}