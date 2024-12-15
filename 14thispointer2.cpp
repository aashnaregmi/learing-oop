//returning obj//

#include <iostream>
using namespace std;

class Builder {
    int value;
public:
    Builder& setValue(int v) { // difference is only reference operator
        this->value = v;
        return *this; //returning operator
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Builder b;
    b.setValue(10);
    b.display(); // Method chaining
    return 0;
}
