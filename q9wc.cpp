#include<iostream>
using namespace std;
class Type{
    private:
    char Letter;
    public:
    void getData(){
        cout<<"Enter the value to be assessed:";
        cin>>Letter;
    }
    void displayResult(){
        
        
        if(Letter == 0 || Letter == 1 || Letter == 2 || Letter == 3 || Letter == 4 || Letter == 5 || Letter == 6 || Letter == 7 || Letter == 8 || Letter == 9){
            cout<<"Number";
        }
        else if(96<Letter<123 || 64<Letter<91){
            if(Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u'||Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter == 'U'){
                cout<<"Vowel";
            }
            else{
                cout<<"Consonant";
            }
        }    
    }
};
int main(){
    Type a;
    a.getData();
    a.displayResult();
    return 0;
}