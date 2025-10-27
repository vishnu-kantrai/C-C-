/*This program takes user input and displays 
whether the provided number is Even or odd*/
#include<iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter a Number: "<<endl;
  cin>>num;

  if(num==0)
    cout << "Number is Zero 
      \nNeither positive nor negative" << endl;
  else if(num%2==0)
    cout << "Number is EVEN" << endl;
  else
    cout << "Number is ODD" << endl;
  
  cin.ignore();
  cin.get();
  return 0;

}
