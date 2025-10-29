/*This program is an experimentation with ternary 
operator (nested). It takes 3 inputs from user
and provides the relation between them.*/

#include<iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout <<"Enter 3 numbers to compared: " << endl;
  cin >> a >>b >> c;

  (a>=b) ? 
    (a>=c) ? 
      (b>=c) ? 
        cout <<a<<">="<<b<<">="<<c<<endl 
      : 
        cout <<a<<">="<<c<<">="<<b<<endl 
    : 
      cout <<c<<">="<<a<<">="<<b<<endl 
  : 
    (b>=c) ? 
      (a>=c) ? 
        cout <<b<<">="<<a<<">="<<c<<endl 
      : 
        cout <<b<<">="<<c<<">="<<a<<endl 
    : 
      cout <<c<<">="<<b<<">="<<a<<endl;
  
  cin.ignore();
  cin.get();
  return 0;
}
