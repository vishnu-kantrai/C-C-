/*Simple cpp program to take input of users name
as character string and display it on trrminal*/

#include<iostream>
using namespace std;

int main()
{
  char name[26];
  cout << "Enter your name: " << endl;
  cin.getline(name,26);

  cout << "\nYour name is: " << name << " ." << endl;

  cin.ignore();
  cin.get();
  return 0;
}
