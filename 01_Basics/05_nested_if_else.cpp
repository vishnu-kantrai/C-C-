/* A nested if else program to find the largest of 3 integers provided by the user.*/

#include<iostream>
using namespace std;

int main()
{
int num_1,num_2,num_3;
cout<<"Enter 3 numbers: "<<endl;
cin>>num_1>>num_2>>num_3;

if(num_1>=num_2)
{
if(num_1>=num_3)
cout<<"\nLargest number is: "<<num_1<<endl;
else
cout<<"\nLargest number is: "<<num_3<<endl;
}

else
{
if(num_2>=num_3)
cout<<"\nLargest number is: "<<num_2<<endl;
else
cout<<"\nLargest number is: "<<num_3<<endl;
}

cin.ignore();
cin.get();

return 0;
}