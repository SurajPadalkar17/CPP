#include<iostream>
using namespace std;

//This will not swap value o a and b
//call by referencee using pointer
int swappointer(int* a,int* b){
    int temp = *a;
    *a=*b;
   *b=temp;
}

//Call by reference using c++ reference Variables
int swapreferenceVar(int & a,int & b){
    int temp =  a;
    a=b;
    b=temp;
}



int main(){
int x,y;
cout<<"Enter x";
cin>>x;
cout<<"Enter x";
cin>>y;
cout<<x<<y<<endl;
// swappointer(&x,&y);//Reference
swapreferenceVar(x,y);//swap x and y using swap variable 
cout<<x<<y;
return 0;
} 