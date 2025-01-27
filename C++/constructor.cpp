#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(void);
    void printnum()
    {
        cout << "The complex no is " << a << " + " << b << "i " << endl;
    }
};
complex::complex(void)
{
    a = 10;  
    b = 4;
}
int main()
{
    complex c1;
    c1.printnum();
    return 0;
}