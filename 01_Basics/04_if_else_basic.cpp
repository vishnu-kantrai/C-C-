/*This program is a basic conditional statement using if-else decision making to check whether the entered number is positive, negative or  zero"

#include<iostream>
using namespace std;

int main()
{
int input;
cout<<"Enter a Number: ";
cin>>input;

if(input>0)
cout<<"\nEntered number " <<input<< " is a POSITIVE number"<<endl;
else if(input<0)
cout<<"\nEntered number " <<input<< " is a NEGATIVE number"<<endl;
else
cout<<"\nEntered number " <<input<< " is neither positive nor negative"<<endl;

cin.ignore();
cin.get();

return 0;
}
