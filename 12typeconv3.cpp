#include <iostream>
 using namespace std;

 class Test{
    int x,y;
    public:

    Test(){

    };
    Test(int a,int b){
    x=a;
    y=b;
    };

    void display(){
        cout<<"The value of xa and y is"<<x<<"&"<<y<<endl;
    };

    

 };

 class Sample{
    int m,n;
    public:
    Sample(int z,int v){
    m=z;
    n=v;}

    void display(){
        cout<<"The value of m and n is"<<m<<"&"<<n<<endl;
    };
    operator Test(){
        return Test(m,n);
    };

    
 };


 int main(){
Test t1;



Sample s1(10,40);

t1=s1;
t1.display();
s1.display();
return 0;


 }

 