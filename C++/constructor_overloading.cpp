#include <iostream>
using namespace std;

class complex
{
    int a, b, c;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnum()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1(4, 6), c2(1);
    c1.printnum();
    c2.printnum();
    return 0;
}