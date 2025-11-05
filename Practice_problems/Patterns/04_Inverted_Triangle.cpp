/*A program to print an inverted triangle shape
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
  unsigned int row = 0;
  char symbol;
  cout << "Enter number of rows ";
  cin >> row;
  cout << "\n";
  cout << "Enter the Symbol to be used: ";
  cin >> symbol;

  for(int j=0; j<row; j++)
    {
      for(int i=0; i<row-j; i++)
        cout << symbol << " ";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
