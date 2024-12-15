/*Static member fuction are the special fuctions in cpp which can be accessed by static data members only .
It is declared in the same class and by called by using class name istread of object i.e  (class-name::fuction name) */
#include <iostream>
using namespace std;


class rectangle{
    int length,breadth;
    static int count;//only static member can access static member fuction therefore this is necessary//
    public:
     void getdata(int l,int b){
        length=l;
        breadth=b;
        count++;
     };

     static void showcount(){
        cout<<"Count="<<count<<endl;

     };

     void displayinfo(){
        cout<<"length="<<length<<"& breadth ="<<breadth<<endl;
     }
};


int rectangle:: count;//remember//



int main(){
   rectangle d1,d2,d3,d4;

   d1.getdata(50,10);
   rectangle::showcount();//normally also can be done but better//
   d1.displayinfo();
   
   d2.showcount();
   d2.getdata(2,3);

   d2.showcount();
   d2.displayinfo();
  rectangle::showcount();
   
   d3.getdata(9,13);
   rectangle::showcount();
   d3.displayinfo();


   d4.getdata(19,23);
   rectangle::showcount();
   d4.displayinfo();



   
    return 0;
}
