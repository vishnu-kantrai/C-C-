/*This program introduces array. It takes its size
input from user and then input of array elements
using for loop. Finally displays the whole Array*/

#include<iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Size of Array: " << endl;
  cin >> size;

  int array[size];

  cout << "Enter Array Elements: " << endl;
  for(int i=0; i<size; i++)
    cin >> array[i];
  
  cout << "Your Array is: " << endl;
  for(int i=0; i<size; i++)
    cout << array[i];

  cin.ignore();
  cin.get();

  return 0;
}
