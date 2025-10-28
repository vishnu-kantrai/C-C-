/*This program takes input from user and keep on adding them until '0' is entered.Displays sum of entered numbers.*/

#include<iostream>
using namespace std;
int main() {
  int num,sum=0;
  do
    {
      cout << "Enter Number to add \n(Enter 0 to display SUM): ") << endl;
      cin >> num;
      sum += num;
    }
    while(num != 0);
  cout << "\nSUM: " << sum << endl;

  cin.ignore();
  cin.get();
  return 0;
}
