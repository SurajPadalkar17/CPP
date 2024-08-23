#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    // Constructor with default values
    Simple(int a = 9, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void inputData()
    {
        cout << "Enter tha values ";
        cin >> data1 >> data2;
    }

    void printData();
};

void Simple::printData()
{
    cout << "The value of data1 is " << data1 << " and data2 is " << data2 << endl;
}

int main()
{
    // Create an object of Simple with default values
    Simple c1;
 
    // Input new values for data1 and data2
    c1.inputData();

    // Print the updated values
    c1.printData();

    return 0;
}
