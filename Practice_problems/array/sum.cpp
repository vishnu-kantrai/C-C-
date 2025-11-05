/*
An array sum program 
Takes size of array input from user and then its elements
Displays array elements sum at the end
*/

#include<iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Array Size: ";
  cin >> size;

  int array[size];
  int sum = 0;
  for(int i=0; i<size; i++)
    {
      cout << "Enter " << i+1 <<" number: ";
      cin >> array[i];
      sum += array[i];
    }
  cout <<" Sum is " << sum << endl;
    
  cin.ignore();
  cin.get();
  return 0;
}
