/*Cross printing program*/

#include<iostream>
using namespace std;

int main()
{
  int rows;
  cout << " Enter number of Rows: ";
  cin >> rows;
  for(int j=0; j<rows; j++)
    {
      for(int i=0; i<rows; i++)
        { 
          if(i==j || i+j+1==rows)
           cout << "*";
          else
           cout << " ";
        }
      cout << "\n";
    }
  
  cin.ignore();
  cin.get();
  return 0;
}
