// destructor never takes an argument nor does it return any value
#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is for object no" << count << endl;
    }
    ~num()
    {
        cout << "This is the time when distructor is called for object nu" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside the main fun" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating wo more objects;" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}
