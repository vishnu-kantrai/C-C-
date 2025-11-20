/*An introductory program for pointers*/

#include<iostream>
using namespace std;

void swap(int*a, int*b);

int main()
{
  int num_1, num_2;
  cout << "Enter two numbers: ";
  cin >> num_1 >> num_2;

  cout << "Before Swapping:\n1st number: " << num_1 << "\n2nd number: " << num_2 << endl;
  swap(&num_1, &num_2);
  cout << "After Swapping:\n1st number: " << num_1 << "\n2nd number: " << num_2 << endl;

  cin.ignore();
  cin.get();
  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
