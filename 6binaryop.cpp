


#include <iostream>
using namespace std;

class Distance{
    int feet;
    int inch;

    public:

   void setData(int a,int b){
    feet=a;
    inch=b;

   };

   void display(){
    cout<<"The feet is "<<feet<<"& the inch is"<<inch<<endl;
   }

   Distance operator+(Distance d2){//here we are returning object therefore we are using cllass name
    Distance d3;
   d3.feet=feet+d2.feet;
   d3.inch=inch+d2.inch;
   d3.feet=(d3.feet+d3.inch)/12;
   d3.inch= (d3.inch) %12;
   return d3;
      
   }
    
};

int main(){
    Distance d1,d2,d3;
    d1.setData(6,2.5);
    d1.display();


d2.setData(8,4.5);
    d2.display();


d3=d1+d2;
d3.display();
return 0;

}

