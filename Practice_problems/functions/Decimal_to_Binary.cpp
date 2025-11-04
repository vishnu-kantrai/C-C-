/*A recursive call function to convert and
print binary form of a given decimal number.*/

#include<iostream>
using namespace std;

void dectobin(int n);
int main ()
{
  int decimal_num;
  cout << "Enter a Number: " << endl;
  cin >> decimal_num;

  if(decimal_num == 0;
    cout << "0 ";
  else
    dectobin(decimal_num);

  cin.ignore();
  cin.get();
  return 0;
}

void dectobin(int n)
{
  if(n == 0)
  {
    return;
  }
  else
{
  dectobin( n/2);
  cout << n%2 <<" ";
}
}
