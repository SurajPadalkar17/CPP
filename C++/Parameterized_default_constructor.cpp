#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int, int);
    void printnum()
    {
        cout << "The complex no is " << a << " + " << b << "i " << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // implicit call for parameterised constructor

    complex s(10, 4);
    s.printnum();
    return 0;
}