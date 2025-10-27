/* This program checks if the number provided by user is divisible by the other 2 numbers provided by user or not.
using nested if-else statements.*/

#include<iostream>
using namespace std;
int main() 
{
  int num, div_1,div_2;
  cout << "Enter your Number: " << endl;
  cin >> num;
  cout << "\nEnter divisors(2) (to check divisibility" << endl;
  cin >> div_1>>div_2;
  cout << endl;

  if(num % div_1 == 0)
		if(num % div_2 == 0)
			cout << num <<" is a multiple of both " << div_1 << " & " << div_2 <<endl;
    else
			cout << num <<" is multiple of "<< div_1 <<" only"<<endl;
  else
		if(num % div_2 == 0)
			cout << num <<" is a multiple of " << div_2 <<" only" <<endl;
    else
			cout << num <<" is multiple of neither" <<endl;

  cin.ignore();
  cin.get();

  return 0;
}
  

