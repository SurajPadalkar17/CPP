//                 public derivation      private derivation    protected derivation
//1.private mem      not inherited         not inherited           not inherited
//2.protected mem     protected              private              protected
//3.public mem          public                  private             protected 

#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};
class derive :protected base
{
        
};
int main()
{
     base b;
     derive s;
    // cout<<s.a;
    return 0;
}