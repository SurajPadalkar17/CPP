#include <iostream>
using namespace std;

class base1
{
private:
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base class constructor called" << endl;
    }
    void display1(void)
    {
        cout << "The value of data1 is" << data1 << endl;
    }
};
class base2
{
private:
    int data2;

public:
    base2(int r)
    {
        data2 = r;
        cout << "base 2 class constructor called" << endl;
    }
    void display2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derive1;
    int derive2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derive1 = c;
        derive2 = d;
        cout << "derived class constructor called " << endl;
    }
    void printdata()
    {
        cout << "The value of derived1 is " << derive1 << endl;
        cout << "The value of derived2 is " << derive2 << endl;
    }
};
int main()
{
    derived harry(1, 2, 4, 9);
    harry.display1();
    harry.display2();
    harry.printdata();
    return 0;
}