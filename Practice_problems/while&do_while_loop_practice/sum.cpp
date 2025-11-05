/*
Summation of number of elements entered by
user using do-while loop.
Numbers add up until user enters 0
*/

#include<iostream>
using namespace std;

int main()
{
  int num,sum = 0;
  cout  << "(Enter 0 to Sum up)\n";
  do
    {
      cout << "Enter Number to add: " << endl;
      cin >> num;
      sum += num;
      system("clear");
    }while(num!= 0);

  cout << "Total Sum: " << sum << endl;
  
  cin.ignore();
  cin.get();
  return 0;
}
