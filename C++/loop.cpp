#include<iostream>
using namespace std;
int main() {
    // There are 3 type of loop
    // 1  for ,while,do while 
    //for loop : for(initialization;condition;updation)
    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i;
        
    // }

    //while loop
    int i=1;
     while (i<=10)
     {
        cout<<i<<endl;
        i++;
     }

    
    
   // do while  :- this loop will exicute for one time if there are condition is false
int j=1;
do
{
   cout<<j;
   j++;
} while (j<10);


}