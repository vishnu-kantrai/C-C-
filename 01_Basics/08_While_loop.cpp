/*This program takes input from the user and 
prints out sum of integers till the provided
number using while loop.*/

#include<iostream>
using namespace std;

int main() {
int num,sum=0;

cout << "Enter number \n(Till which sum is required)" << endl;
cin>>num;

int i=1;
while(i<=num) {
sum+=i;
i++;
}

cout << "Sum till "<< num << "is: "<< sum << endl;

cin.ignore();
cin.get();

return 0;
}
