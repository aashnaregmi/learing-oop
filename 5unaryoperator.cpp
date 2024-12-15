//to overload unary operators like ++,--//


#include <iostream>
using namespace std;


class Number{
    int num1,num2;
    public:

    Number(int x,int y){
       num1= x;
       num2=y;
    };

    void showdata(){
        cout<<"The value of x and y is "<<num1<<"&"<<num2<<endl;
    };

    void operator ++(int){//for post fix but for prefix int is not needed//
    num1++;
   num2++;
    };

     void operator --(int){
    num1--;
   num2--;
    };



};



int main(){
    Number n1(5,2);
    n1.showdata();
    cout<<"After increment:"<<endl;
    n1++;
    n1.showdata();
    cout<<"After decrement:"<<endl;
    n1--;
    n1.showdata();


    return 0;
}
