// Reusabiity is imp feature of  oop
// existing class is called as base class
// new class which in inherited is derived class
// multiple,multilevel,hybrid,single,hierarchical

// single : a -> b
// multiple : derived class with more than one base class a,b -> c  one chile and sevearal father
// hierarchical : several derived from single base class one father and several child
// multilevel : a -> b -> c
// hybrid a -> b,c -> d

#include <iostream>
using namespace std;
// Base class
class emp
{

public:
    int id;
    float salary;

    emp(int empid)
    {
        id = empid;
        salary = 34.0;
    }
    emp() {}
};
// class {{ derived class name}} : {{visibility mode}}base class name
// derived class
class programmer : public emp
{
public:
    int languagecode = 9;
    programmer(int empid)
    {
        id = empid;
    }
    void getdata()
    {
        cout << id << endl;   
    }
};
int main()
{
    emp harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer c(10);
    // programmer c(1);
    cout << c.languagecode << endl;
    c.getdata();

    return 0;
}