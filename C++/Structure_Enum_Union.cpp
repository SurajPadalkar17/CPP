//Structure is user defined data types 

#include<iostream>
using namespace std;
typedef struct employee{
    int eID;
    char favchar;
    float salary;
}ep;//if we not use typedef we cant call ep

//Union
union money
{
    /* data *///From this we can usee only one data 
    int rice;
    int car;
    int pounds;
};
 

 
int main(){
// struct employee suraj;
// suraj.eID=1;
// suraj.favchar='S';
// suraj.salary=100000;
// cout<<"the value of "<<suraj.eID<<endl;
// cout<<"the value of "<<suraj.favchar<<endl;
// cout<<"the value of "<<suraj.salary<<endl;



// union money m1;

// m1.rice=34;
// m1.car='c';
// cout<<m1.car;//print the garbag value beacause 2 data are calling onl one we have to ccall



//enum
enum meal{breakfast,lunch,dinner};
meal m1 = breakfast;
cout<<m1;
cout<<breakfast;
cout<<lunch;
cout<<dinner;



return 0;
}