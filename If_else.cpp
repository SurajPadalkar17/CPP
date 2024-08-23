// Control structure
// 1.sequence structure
// 2.slection structure
// 3.loop structure


#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    if(age<18){
        cout<<("You can not come to my party")<<endl;

    }
    else if(age==18){
        cout<<"Uor are kid";

    }
    else{
        cout<<"You can come to party";
    }
    return 0;


}