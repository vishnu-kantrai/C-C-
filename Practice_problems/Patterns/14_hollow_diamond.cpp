#include<iostream>
using namespace std;

int main()
{
  unsigned int rows = 0;
  cout << "Enter No. of Rows: ";
  cin >> rows;

  //upright part
  for(int j=0; j<rows; j++)
    {
      //spaces
      for(int i=1; i<rows-j; i++)
        cout << " ";

      //stars
      for(int i=1; i<=2*j+1; i++)
        {
          if(i==1 || i==2*j+1)
            cout << "*";
          else
            cout << " ";
        }
      cout << endl;
    }

  
  //downside part
  for(int j=rows-1; j>0; j--)
    {
      //spaces
      for(int i=1; i<=rows-j; i++)
        cout << " ";

      //stars
      for(int i=1; i<=2*j-1; i++)
        {
          if(i==1 || i==2*j-1)
            cout << "*";
          else
            cout << " ";
        }
      cout << endl;
    }

  cin.ignore();
  cin.get();
  return 0;
}
