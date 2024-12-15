//user defined to basic//

//Use of casting operator//

#include <iostream>
using namespace std;


class Number{
int n;
    public:
    //constructor is must//
Number(int x){
    n=x;
    
};
 void display(){
    cout<<"n="<<n<<endl;
 }

 operator int(){//cost operator//
    return n;
 }

};




int main(){

   
Number n1(4);
 int x=n1;
n1.display();
cout<<"The value of x is "<<x<<endl;
return 0;

}