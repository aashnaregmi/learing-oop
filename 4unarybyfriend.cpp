//overloading unary operator using friend function??


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
   friend void operator++(Number &n);
    

    

};
void operator ++(Number &n){
   n. num1++;
   n.num2++;
    };


     
        int main(){
    Number n1(5,2);
    n1.showdata();
    cout<<"After increment:"<<endl;
    ++n1;//plus operator is called and n1 is passed
    n1.showdata();
    


    return 0;
}
     