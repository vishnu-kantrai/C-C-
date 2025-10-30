/*This program is simple use of functions that takes two integer inputs from user and prints sum*/

#include<iostream>
using namespace std;

int main()
{
  int sum(int a, int b);
  int num_1, num_2;
  cout << "Enter 2 numbers to add: " << endl;
  cin >> num_1 >> num_2;
  cout << "\nSum: " << sum(num_1,num_2) << endl;

  cin.ignore();
  cin.get();
  return 0;
}

int sum( int a, int b)
{
  return a+b;
}
