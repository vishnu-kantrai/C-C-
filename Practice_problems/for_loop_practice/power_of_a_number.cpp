/*This program uses simple for loop to calculate
power of a given number.*/

#include<iostream>
using namespace std;

int main()
{
  int num, pow, result=1;
  cout << "Enter your number: " << endl;
  cin >> num;
  cout <<"\nEnter its Power: " << endl;
  cin >> pow;

  for(int i=1; i<=pow; i++)
    {
      result *=num;
    }
  cout << "Result: " << result <<endl;

  cin.ignore();
  cin.get();
  return 0;
}
