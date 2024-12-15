#include <iostream>
using namespace std;

// Global variables
int id = 10;
string name = "aaa";
float salary = 2000000;

class Employee {
    // Class member variables
    int id;
    string name;
    float salary;

public:
    // Constructor
    Employee(int id, string name, float salary) {
        // Resolving name conflict using 'this' pointer
        this->id = id;         // Assigning the constructor parameter to the member variable
        this->name = name;     // Same for name
        this->salary = salary; // Same for salary
    }

    // Method to display employee details
    void display() {
        cout << "Id: " << id << endl;         // Accessing member variable 'id'
        cout << "Name: " << name << endl;     // Accessing member variable 'name'
        cout << "Salary: " << salary << endl; // Accessing member variable 'salary'
    }
};

int main() {
    // Creating an Employee object
    Employee e1(1001, "Aashna", 200000); // Passing constructor arguments
    e1.display(); // Displaying employee details
    return 0;
}


