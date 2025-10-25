/* Program using switch-case to print day of the week based on number input.
Starting with 1=Monday */

#include<iostream>
using namespace std;

int main()
{
int day;
cout << "Enter a number: ";
cin>>day;

switch(day%7)
{
case 0: cout << "\nSunday"; break;
case 1: cout << "\nMonday"; break;
case 2: cout << "\nTuesday"; break;
case 3: cout << "\nWednesday"; break;
case 4: cout << "\nThursday"; break;
case 5: cout << "\nFriday"; break;
case 6: cout << "\nSaturday"; break;
default: cout << "\nInvalid";
}

cin.ignore();
cin.get();
return 0;
}