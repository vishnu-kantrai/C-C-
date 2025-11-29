#include<iostream>
using namespace std;
int main()
{
  int size;
  cout << "Enter array size: ";
  cin >> size;
  int array[size];
  cout << "\nEnter array elements: " << endl;
  for(int i=0; i<size; i++)
    cin >> array[i];

  int max=0,second_max=0;
  for(int i=0; i<size; i++)
    {
      if(max < array[i])
        second_max = max;
        max = array[i];
    }

  cout << "\nSecond Max: " << second_max << endl;
  
  cin.ignore();
  cin.get();
  return 0;
}
