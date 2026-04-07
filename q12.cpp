#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3; //three sides of triangle
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"Equilateral Triangle";
    }
    else if (s1==s2 && s2!=s3){
        cout<<"Isosceles Triangle";
    }
    else{cout<<"Scalene Triangle";}
    return 0;
}