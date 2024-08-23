#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int r)
{
    roll_no = r;
}
void student ::get_roll_no()
{
    cout << "The roll no is" << roll_no << endl;
}

class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void set_mark(float, float);
    void get_mark(void);
};

void exam ::set_mark(float m1, float m2)
{
    maths = m1;
    phy = m2;
}
void exam ::get_mark()
{
    cout << "The marks obtained in math are " << maths << endl;
    cout << "the marks obtained in phy is " << phy << endl;
}
class result : public exam
{
    float perc;

public:
    void display()
    {
        // get_roll_no();
        get_mark();
        cout << "Your percentage is " << (maths * phy) / 2;
    }
};
int main()
{

    result r; 
    r.set_roll_no(10);
    r.set_mark(32, 100);
    r.get_roll_no();
    r.display();
    return 0;
}