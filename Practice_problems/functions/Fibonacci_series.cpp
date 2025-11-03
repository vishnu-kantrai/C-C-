/*A program to print n termsof fibonacci 
series where n is input by user*/

#include<iostream>
using namespace std;
int fibo( int n );
int main()
{
  int number;
  cout << "Enter Number of Terms for Fibonacci Series: " << endl;
  cin >> number;

  for(int i=1; i<= number; i++)
    cout << " " << fibo(i) << " ";
  
  cin.ignore();
  cin.get();

  return 0;
}

int fibo( int n)
{
  if(n == 1 || n == 2)
    return 1;
  else
    return fibo(n-1) + fibo(n-2);
}
