
//accessing member variablle

#include <iostream>
using namespace std;

class Car {
    string brand;
    int year;

public:
    
    Car(string b, int y) {
        this->brand = b;  
        this->year = y;   
    }

    
    void display() {
        cout << "Car Brand: " << this->brand << ", Year: " << this->year << endl; // Using 'this' to access member variables
    }
};

int main() {
    Car myCar("Toyota", 2020);  
    myCar.display();             

    return 0;
}
