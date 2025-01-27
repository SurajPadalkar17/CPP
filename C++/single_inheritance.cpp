#include <iostream>
using namespace std;

class base
{
    int data1; // not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return data2;
}

class derive : private base
{
    int data3;

public:
    // Expose the base class methods that you need to be accessible
    using base::setdata;
    using base::getdata1;
    using base::getdata2;

    void process();
    void display();
};

void derive::process()
{
    setdata(); // Corrected to call the setdata() function
    data3 = data2 * getdata1();
}

void derive::display()
{
    cout << "Value of data1 is " << getdata1() << endl;
    cout << "Value of data2 is " << getdata2() << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    derive d;
    d.setdata(); // Set data before processing
    d.process();
    d.display();
    return 0;
}
