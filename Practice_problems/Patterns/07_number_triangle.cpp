/*A program to print a number triangle.
j is used to denote rows
i is used to denote columns*/

#include<iostream>
using namespace std;

int main()
{
  unsigned int rows = 0;
  int num = 1;
  cout << "Enter number of rows ";
  cin >> rows;

  for(int j=1; j<=rows; j++)
    {
      for(int i=1; i<=j; i++)
        cout << num++ << " ";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
