#include<iostream>
using namespace std;

class shop {
    int id;
    float price;
public:
    void setdata(int a, float b) {
        id = a;
        price = b;
    }

    void getdata(void) {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main() {
    int size = 4;
    int p;
    float q;
    shop *ptr = new shop[size]; 
    shop *ptrtemp = ptr;

    for (int i = 0; i < size; i++) {
        cout << "Enter Id and price of Item " << i + 1 << ": ";
        cin >> p >> q;
        ptrtemp->setdata(p, q);
        ptrtemp++;
    }

    // Reset ptrtemp to the beginning of the array
    ptrtemp = ptr;

    for (int j = 0; j < size; j++) {
        cout << "Item no " << j + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    delete[] ptr; // Remember to free the allocated memory

    return 0;
}
