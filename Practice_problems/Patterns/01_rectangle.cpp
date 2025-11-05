/*A Rectangle pattern printing program.
Takes length and width input from user and
prints a star(*) rectangle
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
 unsigned int length, width = 0;
  cout << "Enter Length of rectangle: ";
  cin >> length;
  puts("\n");
  cout << "Enter Width of rectangle: ";
  cin >> width;

  for(int j=0; j<width; j++)
    {
      for(int i=0; i<length; i++)
        cout << "* ";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
