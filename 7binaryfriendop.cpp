#include <iostream>
using namespace std;


class Time{
    int hrs,min;

    public:

    void getdata(int h,int m){
        hrs=h;
        min=m;

    }

    void display(){
        cout<<hrs<<":"<<min<<endl;

    }

   friend Time operator+(Time t1,Time t2){//in friend function send both
    Time t3;
    t3.hrs=(t1.min+t2.min)/60;
    t3.min=(t1.min+t2.min)%60;
    t3.hrs+=t1.hrs+t2.hrs;
    return t3;

   }

};

int main(){
    Time t1, t2, t3;
    t1.getdata(2, 45);  // 2 hours and 45 minutes
    t1.display();

    t2.getdata(1,25);
    t2.display();

    t3=t1+t2;
    t3.display();
    return 0;

}