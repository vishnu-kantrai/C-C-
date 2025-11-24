#include<iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Array Size : ";
  cin >> size;
  int array[size];

  cout << "\nEnter Array Elements: " << endl;
  
  for(int i=0; i<size; i++)
    cin >> array[i];

  cout << "Array before reversing: " << endl;
  for(int i=0; i<size; i++)
    cout << array[i] << " ";

  for(int i=0, j=size-1; i<=j; i++,j--)
    {
      array[i] = array[i] + array[j];
      array[j] = array[i] - array[j];
      array[i] = array[i] - array[j];
    }

  cout << "\nArray after reversing: " << endl;
  for(int i=0; i<size; i++)
    cout << array[i] << " ";

  cin.ignore();
  cin.get();
  return 0;
}
