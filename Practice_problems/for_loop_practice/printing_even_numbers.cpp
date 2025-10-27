/*This program takes a user input (target) 
and prints all natural even numbers upto that target value.*/

#include<iostream>
using namespace std;
int main()
{
	int target;
	cout<<"Enter the Target value \nUpto which even numbers will be printed: "<<endl;
	cin>>target;

	cout<<"Even Numbers upto "<<target<<" are:"<<endl;
	for(int i=1; i<=target; i++)
		if(i%2==0)
			cout<<i<<"; ";
	
	cin.ignore();
	cin.get();
	
	return 0;
}
