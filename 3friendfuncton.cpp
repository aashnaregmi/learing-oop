/*Friend function is the special fuction which is not the
 memebr of the class but it still hass access to the private and protected member of the class*/
/*
-it is usefull when need the access to private members  outside the class without making the data public
-Syntax:friend return-type function-name(parameters)
-it is invoked as a normal fuction outside the class and also called as a normal function by passsing object to it .
-it cannot be called by using the object of the class.
-usually ,it has object passed as argument.
-it can accesss the private info using the object of the class only

*/



#include <iostream>
using namespace std;


class rectangle{
    int length,breadth;
  

    public:
     void getdata(int l,int b){
        length=l;
        breadth=b;
        
     };

     friend int area(rectangle d);
  
     
};

int area(rectangle d){//here pass class name and object//


    return int(d.length*d.breadth);
}



int main(){
    rectangle d1;
    d1.getdata(10,5);
    cout<<"The area of the rectangle is "<<area(d1)<<endl;//pass object to the fuction//
    return 0;
}