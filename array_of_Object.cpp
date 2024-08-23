#include <iostream>
using namespace std;
class emp
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 222;
        cout << "The id of emp";
        cin >> id;
    }
    void getdata()
    {
        cout << "The id of this emp is" << id << endl;
    }
};
int main()
{
    // emp harry, suraj, shubh;
    // harry.setid();
    // harry.getdata();
    emp fb[3];
    for (int i = 0; i < 3; i++)
    {
        fb[i].setid();
        fb[i].getdata();
    }

    return 0;
}