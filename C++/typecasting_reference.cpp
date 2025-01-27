// reference variable and typecasting
#include <iostream>
using namespace std;

// int c=5;
int main() {
  float x = 455;
  float &y = x;
  cout << "x" << endl;
  cin >> x;
  cout << y << endl;

  // cout<<"The global c is"<<::c;

  // Typecasting
  int a = 45;
  float b = 45.46; 
  cout << float(a) << endl;
  cout << int(b);
  return 0;
}
