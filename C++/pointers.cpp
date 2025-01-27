//Pointer is type of variable which holds the adresss of other data types.
// & is the address of operator
//* is the dereference operator
//It is derived data types
#include<iostream>
using namespace std;

int main(){
  int a=3;
  int * b= &a;  
  cout<<"address of a is :"<<&a<<endl;
  cout<<"address of b is :"<<b<<endl; 

  //Dereference pointer......
  cout<<"The value at address b is"<<*b<<endl;

  //Pointer to pointer 
  int **c=&b;
  cout<<"the vaule of b is"<<&b<<endl;
  cout<<"The value of c is"<<c<<endl;
  cout<<"The value at address c is"<<**c<<endl;
  cout<<"The value at address value at(value at (c)) is"<<*c<<endl;
return 0;
}