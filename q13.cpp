#include<iostream>
#include<cmath>
using namespace std;
int main(){//to solve quadratic eqn
    cout<<"wrt the eqn ax^2+bx+c give the values of a b c : ";
    int a,b,c;
    //these are the values with respect to the equation given above
    cin>>a>>b>>c;
    //to find the roots 
    double discriminant = pow(b, 2) - 4 * a * c;
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "Real and distinct roots: " << x1 << ", " << x2;

    return 0;
}