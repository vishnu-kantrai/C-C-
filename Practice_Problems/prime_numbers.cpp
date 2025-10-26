/* This program prints prime numbers upto the
number provided by the user.*/

#include<iostream>
using namespace std;
int main() {
int num,count;
cout<<"Enter a Number: "<<endl;
cin>>num;

cout<<"Prime numbers upto "<<num<<" are: "<<endl;

for(int j=2; j<=num; j++)
{
  count=0;
  for(int i=2; i<j; i++)
    if(i!=j && j%i==0)
    {
      count++;
      break;
    }
  if(count==0)
    cout<<" "<<j<<" ";
}

cin.ignore();
cin.get();
return 0;

}
