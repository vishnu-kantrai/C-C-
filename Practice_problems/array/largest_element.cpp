#include<iostream>
using namespace std;
int main()
{
  int size;
  cout << " Enter Array size: ";
  cin >> size;
  int array[size];
  int max = 0;
  int index = 0;

  cout << "\nEnter array elements: " << endl;
  for(int i=0; i<size; i++)
    {
      cin >> array[i];
      if(array[i] > max)
      {
        max = array[i];
        index = i;
      }
    }
  cout << "Max element is: " << max << " at index: " << index << endl;

  cin.ignore();
  cin.get();
  return 0;
}
