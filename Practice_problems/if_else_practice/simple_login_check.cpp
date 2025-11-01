/*An if else program to check login credentials*/

#include<iostream>
using namespace std;

int main()
{
  char user_name[25], password[15];

  cout << "Enter username: ";
  cin >> user_name;
  puts("\n");

  cout << "Password: ";
  cin >> password;
  puts("\n");

  if(strcmp(user_name,"VISHNU") == 0 && strcmp(password,"123ABC") == 0)
    cout << "Login Successful" << endl;
  else
    cout << "Invalid" << endl;
    

  cin.ignore();
  cin.get();
  return 0;
}
