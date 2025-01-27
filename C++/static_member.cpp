#include <iostream>
using namespace std;

class emp
{
    int id;
    //  int count=0;//Instead of this we can write by static
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID";
        cin >> id;
        count++;
    }
    void getdata()
    {

        cout << "the id of this empl is " << id << " and this is emp no" << count + 1 << endl;
    }
    static void getcount() // we cannot access element from class like id
    {
        cout << "The value of count is " << count << endl;
    }
};
int emp ::count; // default value is 0 static var is always written outside the class
int main()
{
    emp su;
    // su.id; cannot do bwacause is private
    su.setdata();
    su.getdata();
    emp::getcount();
    return 0;
}