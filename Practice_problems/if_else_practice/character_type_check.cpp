/*This program takes a user input (character)
and checks if it is a digit, alphabet or special
character.*/

#include<iostream>
using namespace std;

int main()
{
  char input;
  cout << "Enter your Character: " << endl;
  cin >> input;

  if( input>='A' && input<='Z')
    cout << "Your input is UPPER CASE CHARACTER" << endl;
  else if( input>='a' && input<='z')
    cout << "Your input is LOWER CASE CHARACTER" <<endl;
  else if( input>='0' && input<='9')
    cout << "Your input is a Digit" << endl;
  else
    cout << "Your input is a Special Character" << endl;

  cin.ignore();
  cin.get();

  return 0;
}
