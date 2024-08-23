#include<iostream>
using namespace std;


class complex {
    int real,img;
    public :
    void getdata(){
        cout<<"The real part is"<<real<<endl;
        cout<<"The img part is"<<img;

    }
    void setdata(int a,int b){
        real = a;
        img=b;
    }
};
int main(){
complex s;
complex *ptr = &s;

// (*ptr).setdata(10,10);
ptr ->setdata(10,20);

// (*ptr).getdata();
ptr->getdata();


return 0;
}