#include<iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Array Size: ";
  cin >> size;
  int array[size];
  cout << "\nEnter Elements: " << endl;
  int *p = &array[0];
  int sum = 0;
  for(int i=0; i<size; i++)
    {
      cin >> array[i];
      sum += *(p+i);
    }
  cout << "\n" << sum;

  cin.ignore();
  cin.get();
  return 0;
}
