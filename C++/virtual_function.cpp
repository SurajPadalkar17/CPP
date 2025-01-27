#include<iostream>
using namespace std;


class base
{
public:
    int var_base=2;
    virtual void display()
    {
        cout << "Displaying base class varible varbase" << var_base << endl;
    }
};
class derive : public base
{
public:
    int var_derive=3;
    void display()
    {
        cout << "Displaying base class variable var_base  " << var_base << endl;
        cout << "displaying derived class variable var_derived" << var_derive << endl;
    }
};
int main(){
    base * base_pointer;
    base obj;
    derive obj2;

    base_pointer = &obj2;
    base_pointer ->display();

return 0;
}