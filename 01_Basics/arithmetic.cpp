include<iostream>
using namespace std;

int main()
{
float num_1,num_2;
cout<<"Enter 2 numbers: ";
cin>>num_1>>num_2;
cout<<"\nSum = "<<num_1+num_2<<endl;
cout<<"\nDifference = "<<num_1-num_2<<endl;
cout<<"\nMultiplication = "<<num_1*num_2<<endl;
cout<<"\nDivision = "<<num_1/num_2<<endl;

cin.ignore();
cin.get();
return 0;
}
