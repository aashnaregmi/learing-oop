//to concatinate string using + operator

#include <iostream>
#include <string.h>
using namespace std;


class StringInfo{
    string name;

    public:

    void putdata(){
     cout<<"Enter the name"<<endl;
     getline(cin,name);
    }

    void getdata(){
        cout<<"Enter the  last name"<<endl;
     getline(cin,name);

    }


    void display(){
        cout<<"Name: "<<name<<endl;
    };

    StringInfo operator+(StringInfo s){
        StringInfo temp;

       temp.name = name + s.name;
        return temp;

    }

};

int main(){
    StringInfo s1,s2,s3;
    s1.putdata();
    s2.getdata();
    s3=s1+s2;
    s3.display();
    return 0;

}