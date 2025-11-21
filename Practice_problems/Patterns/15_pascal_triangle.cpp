/*Program ro print rhe pascals triangle*/

#include<iostream>
using namespace std;
int fact(int);
int main()
{
  int rows;
  cout << "Enter number of rows: ";
  cin >> rows;

  for(int j=0; j<rows; j++)
    {
      //spaces
      for(int i=0; i<rows-j; i++)
        cout << " ";

      //number
      for(int i=0; i<=j; i++)
        cout << fact(j)/(fact(i) * fact(j-i)) << " ";
      cout << endl;
    }

  cin.ignore();
  cin.get();
  return 0;
}

int fact(int x)
{
  if(x==1 || x==0)
    return 1;
  else
    return x * fact(x-1);
}
