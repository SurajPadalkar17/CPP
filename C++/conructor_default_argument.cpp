#include <iostream>
using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9) // if value in main function not given then by default it takes 9
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void simple::printdata()
{
    cout << "The value od data1  is" << data1 << "And data2 is" << data2;
}
int main()
{
    simple c1(1, 4);
    c1.printdata();
    return 0;
}