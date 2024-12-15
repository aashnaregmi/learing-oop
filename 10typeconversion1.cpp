//basic to user defined data type//

#include <iostream>
using namespace std;


class Number{
int num1;
    public:
    //constructor is must//
Number(int x){
    num1=x;

};
 void display(){
    cout<<num1<<endl;
 }

};







int main(){

 int x=5;   
Number n1(x);
n1.display();
return 0;

}