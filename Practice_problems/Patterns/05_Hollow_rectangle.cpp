/*A hollow rectangle printing program
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
 unsigned int length, width = 0;
  cout << "Enter Length of rectangle: ";
  cin >> length;
  cout << "\n";
  cout << "Enter Width of rectangle: ";
  cin >> width;

  for(int j=0; j<width; j++)
    {
      for(int i=0; i<length; i++)
        {
          if(i == 0 || i == length-1 || j == 0 || j == width-1)
            cout << "* ";
          else
            cout << "  ";
        }
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
