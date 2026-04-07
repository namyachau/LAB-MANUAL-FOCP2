#include<iostream>
#include<vector>
using namespace std;
int main(){//max sales
    int n;
    cin>>n;
    int max=0;
    vector<int> sales(n);
    for(int k=0; k<n; k++){
        cin>>sales[k];
    }
    for(int i=0; i<n; i++){
          if(sales[i]>=max){
                max=sales[i];
            }
            else{
                continue;
            }       
    }
    cout<<max;
}