/*This is a simple for loop program to find
greatest common devisior for 2 numbers provided
by the user*/

#include<iostream>

using namespace std;
int main()
{
  unsigned int num_1, num_2;
  cout << "Enter 2 Numbers to find their greatest common divisor: " << endl;
  cin >> num_1 >> num_2;

  if(num_1 == num_2)
    cout << "GCD: " << num_1 << endl;
  else
  {
    int gcd=1;
    int limit = (num_1 < num_2) ? num_1 : num_2;
    for(int i = 2; i<=limit; i++)
      if(num_1 % i == 0 && num_2 % i == 0)
        gcd = i;
    cout << "GCD: " << gcd << endl;
  }

  cin.ignore();
  cin.get();
  return 0;
}
