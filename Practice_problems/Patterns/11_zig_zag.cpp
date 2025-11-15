#include<iostream>
using namespace std;

int main()
{
  int rows;
  static int a = 1;
  cout << "Enter rows: " ;
  cin >> rows;
  for(int j=0; j<rows; j++)
    {
      if(j%2 != 0)
        for(int i=1; i<=rows; i++)
          {
            cout << i << " ";
          }
      else
        for(int i=rows; i>=1; i--)
          {
            cout << i << " ";
          }
      cout<<endl;
    }

  cin.ignore();
  cin.get();
  return 0;
}
