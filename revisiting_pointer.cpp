#include<iostream>
using namespace std;

int main(){
 int a = 4 ;
 int *ptr = &a;
 //new keyword
 int *p = new int (40);
 cout<<"the value at address p is "<<*p<<endl;
int *arr=new int[3];
arr[0]=10;
arr[1]=30;
arr[2]=80;
arr[4]=90;
delete[]arr;
 cout<<"the value at address arr[0] is "<<arr[0]<<endl;
return 0;
}