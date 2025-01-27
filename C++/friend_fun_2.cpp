#include <iostream>
using namespace std;

class y;  // Forward declaration of class y

class x {
    int data;

public:
    void setvalue(int value) {
        data = value;
    }
    friend void add(x, y);  // Declaring the add function as a friend
};

class y {
    int num;

public:
    void setvalue(int value) {
        num = value;
    }
    friend void add(x, y);  // Declaring the add function as a friend
};

// Definition of the friend function
void add(x o1, y o2) {
    cout << "Sum of data in x and y objects is: " << o1.data + o2.num << endl;
}

int main() {
    x o1;
    y o2;
    o1.setvalue(3);
    o2.setvalue(5);
    add(o1, o2);  // Passing objects to add function

    return 0;
}
