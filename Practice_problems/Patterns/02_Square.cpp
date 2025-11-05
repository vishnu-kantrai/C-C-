/*A square pattern printing program.
Takes length of sides and symbol type input 
from user to print a Square
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
  unsigned int side = 0;
  char symbol;
  cout << "Enter Side lengths of square: ";
  cin >> side;
  cout << "\n";
  cout << "Enter the Symbol to be used: ";
  cin >> symbol;

  for(int j=0; j<side; j++)
    {
      for(int i=0; i<side; i++)
        cout << symbol << " ";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
