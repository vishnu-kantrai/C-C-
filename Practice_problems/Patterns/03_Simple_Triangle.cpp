/*A simple program to print a triangle shape
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
  unsigned int rows = 0;
  char symbol;
  cout << "Enter number of rows ";
  cin >> rows;
  cout << "\n";
  cout << "Enter the Symbol to be used: ";
  cin >> symbol;

  for(int j=1; j<=rows; j++)
    {
      for(int i=1; i<=j; i++)
        cout << symbol << " ";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
