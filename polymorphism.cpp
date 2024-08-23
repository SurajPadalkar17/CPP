#include <iostream>
using namespace std;
// poymorphism : One name multiple forms
//  eg function oerloading,virtual function,operator overloading
// It  has two types 1.Compile time 2 Run time polymorphism
//  1.1 functon 1.2 operator overloading
// 2.1 virtual function

class base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class varible varbase" << var_base << endl;
    }
};
class derive : public base
{
public:
    int var_derive;
    void display()
    {
        cout << "Displaying base class variable var_base  " << var_base << endl;
        cout << "displaying derived class variable var_derived" << var_derive << endl;
    }
};
int main()
{
    base *base_pointer;
    base b;
    derive d;
    base_pointer = &d; // pointing to derive class

    base_pointer->var_base = 34;
    base_pointer->display();

    //same we can do for derive class 

    return 0;
}