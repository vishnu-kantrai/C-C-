/*A targetted sum simple program for array.*/

#include<iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Array size: ";
  cin >> size;

  int array[size];
  cout << "\nEnter Array elements: " << endl;
  for( int i=0; i<size; i++)
    cin >> array[i];

  int target = 0;
  cout << "\nEnter Target number: ";
  cin >> target;

  for(int j=0; j<size; j++)
    for(int i=j+1; i<size; i++)
      if(array[j] + array[i] == target)
        cout << "Elements at: " << i <<" , " << j << endl;
  
  cin.ignore();
  cin.get();
  return 0;
}
