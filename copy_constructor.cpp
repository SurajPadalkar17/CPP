#include <iostream>
using namespace std;

class Simple {
    int data1, data2;

public:
    // Parameterized constructor
    Simple(int a, int b) {
        data1 = a;
        data2 = b;
    }

    // Copy constructor
    Simple(const Simple &obj) {
        data1 = obj.data1;
        data2 = obj.data2;
        cout << "Copy constructor called!" << endl;
    }

    void printData() const {
        cout << "The value of data1 is " << data1 << " and data2 is " << data2 << endl;
    }
};

int main() {
    // Create an object of Simple
    Simple c1(10, 20);
    c1.printData();

    // Create another object c2 as a copy of c1
    Simple c2(c1);
    c2.printData();

    return 0;
}
