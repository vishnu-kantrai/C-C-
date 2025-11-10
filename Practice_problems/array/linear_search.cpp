/*A program to search a number in user entered 
array using leniar search*/

#include<iostream>
using namespace std;
int main()
{
  int size;
  cout << "Enter array Size: ";
  cin >> size;

  int array[size];
  cout << "Enter Array elements: " << endl;
  for(int i=0; i<size; i++)
    cin >> array[i];

  int num, position = 0;
  cout << "\nEnter number to search: ";
  cin >> num;

  bool flag = false;
  for(int i=0; i<size; i++)
    if(array[i] == num)
    {
      flag = true;
      position = i+1;
      break;
    }
  if(flag)
    cout << "\nElement is at position: " << position;
  else
    cout << "\nElement is not in the given array";

  cin.ignore();
  cin.get();

  return 0;
}
