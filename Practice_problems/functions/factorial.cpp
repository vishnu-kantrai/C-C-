/*A recursive program to find the factorial of a number input by user*/

#include<iostream>
using namespace std;

int factorial(int a);

int main()
{
  int num;

  cout << "Enter number to find factorial " << endl;
  cin >> num;

  cout << "Factorial of " << num << " is: " << factorial(num) << endl;

  cin.ignore();
  cin.get();
  return 0;
}

int factorial(int a)
{
  if(a==0 || a==1)
    return 1;
  else
    return a * factorial(a-1);
}
