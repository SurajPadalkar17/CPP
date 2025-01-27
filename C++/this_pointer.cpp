#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void dsetdata(int a)
    {
        // this is a keyword which is pointer
        //  which points to the obj which invokes the member fuction
        this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.dsetdata(8);
    a.getdata();

    return 0;
}