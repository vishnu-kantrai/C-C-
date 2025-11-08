/*Program to print mirror triangle using setw function.
It introduces to imagine header file.
j is used to denote rows
i is used to denote columns*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  unsigned int rows = 0;
  cout << "Enter number of rows ";
  cin >> rows;

  for(int j=0; j<rows; j++)
    {
      cout << setw(rows-j);
      for(int i=0; i<=j; i++)
        cout << "*";
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
