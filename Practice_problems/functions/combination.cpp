/*This program calculates the number of possible 
combinations using the formula nCr where 
Total number of choices = n
Required numbers of items = r
*/

#include<iostream>
using namespace std;

int fact(int a);

int main()
{
  int n,r;
  cout << "Enter Total number of elements of Set: " << endl;
  cin >> n;
  cout << "Enter Number of items to be chosen: " << endl;
  cin >> r;
  puts("\n");

  if(r>n || n<0 || r<0)
    cout << "\nInvalid Data" << endl;
  else
    cout << "\nnCr: " << fact(n)/(fact(r)*fact(n-r));

  cin.ignore();
  cin.get();
  return 0;
}

int fact(int a)
{
  if(a==1 || a==0)
    return 1;
  else
    return a*fact(a-1);
}
