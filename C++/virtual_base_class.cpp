#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_no(int a)
    {
        roll = a;
    }
    void print_no(void)
    {
        cout << "your roll no is " << roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, phy;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        phy = m2;
    }
    void print_mark(void)
    {
        cout << "Your result is here :" << endl;
        cout << " Maths " << maths;
        cout << " Physics :" << phy << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};   
class result : virtual public test, public sport
{
private:
    float total;

public:
    void displlay(void)
    {
        total = maths + phy + score;
        print_no();
        print_mark();
        print_score();
        cout << "your total score is " << total << endl;
    }
};
int main() 
{
    result ha;
    ha.set_no(12);
    ha.set_mark(10, 20);
    ha.set_score(9);
    ha.displlay();
    // ha.print_score();
    return 0;
}