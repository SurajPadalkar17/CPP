#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calc
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcom(complex, complex);
    int sumimg(complex, complex);
};

class complex
{
    friend class calc;
    int a, b;
    // friend int calc::sumcom(complex , complex ); // Friend function declaration
    // friend int calc ::sumimg(complex, complex);

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calc::sumcom(complex o1, complex o2)
{
    return (o1.a + o2.a); // Corrected to sum the real parts (a)
}
int calc::sumimg(complex o1, complex o2)
{
    return (o1.b + o2.b); // Corrected to sum the real parts (a)
}

int main()
{
    complex o1, o2, sum;
    o1.setnum(1, 4);
    o2.setnum(5, 7);

    calc c;
    int res = c.sumcom(o1, o2);
    cout << "The sum of the real parts of o1 and o2 is " << res << endl;

    int resc = c.sumimg(o1, o2);
    cout << "The sum of the img parts of o1 and o2 is " << resc << endl;
    return 0;
}
