/*Multiplication Table printing program for a provided number*/

#include<iostream>
using namespace std;

int main() {
int number;
cout << "Enter the number\n(The table you want\n";
cin >> number;

cout << "Multiplication Table: \n" << endl;
for(int i=1; i<=10; i++)
cout << " " << number << " × " << i << ": " << number*i << endl;

cin.ignore();
cin.get();

return 0;
}