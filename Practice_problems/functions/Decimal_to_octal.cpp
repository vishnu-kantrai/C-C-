#include<iostream>
using namespace std;

void oct(int x);

int main()
{
  int num;
  cout << "Enter a number: " << endl;
  cin >> num;
  cout << "\nOctahydral form of " << num << " is: ";
  if(num==0) cout << "0" << endl;
  else oct(num);
  
  cin.ignore();
  cin.get();
  return 0;
}

void oct(int x)
{
  if(x==0)
    return;
  oct(x/8);
  cout << x%8;
}
