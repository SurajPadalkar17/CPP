// Array is collection of items of similar type stored in contiguous memory locations.
#include <iostream>
using namespace std;

int main()
{
    // int i;
    // int marks[i];
    int marks[4] = {23, 3, 32, 43};
    // cout<<marks[0]<<endl;
    // marks[1]=22;//You can chaange the value of array
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<"/n"<<endl;
    // using loop
    // for (int i = 0; i < 4; i++)
    // {
    //     cin>>marks[i];
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // Using array and pointer
    int *p = marks;
    cout << "The value of *p is" << *p << endl;
    cout << "The value of *p+1 is" << *(p + 1) << endl;
    cout << "The value of *p+2 is" << *(p + 2) << endl;
    cout << "The value of *p+3 is" << *(p + 3) << endl;

    return 0;
}