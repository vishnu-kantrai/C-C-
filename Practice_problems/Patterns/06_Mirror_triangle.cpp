/*Program to print mirrored triangle
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
  unsigned int height = 0;
  char symbol;
  cout << "Enter Side lengths of square: ";
  cin >> height;
  cout << "\n";
  cout << "Enter the Symbol to be used: ";
  cin >> symbol;

  for(int j=0; j<height; j++)
    {
      for(int i=0; i<height; i++)
        {
          if(i+j+1>=height)
           cout << symbol << " ";
        }
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
