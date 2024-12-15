#include <iostream>
using namespace std;


class Number{
    int num1;
    public:


    Number(int x){
   num1=x;
   
    };

    void show(){
        cout<<"The value of x is "<<num1<<endl;
    };

    bool operator>=(Number n){//since we are sending true or false <bool>should be used//
        if(num1>=n.num1){
            return true;
        }
        else{
            return false;
        };

    };

    
};



int main(){
    Number n1(4),n2(5);
    n1.show();
    n2.show();

    if(n1>=n2){
        cout<<"N1 is greater then N2"<<endl;
    }
    else{
      cout<<"N2 is greater"<<endl;
    };
    return 0;
}