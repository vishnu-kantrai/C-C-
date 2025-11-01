/*This program is simple function from swapping 2 numbers via call by reference*/

#include<iostream>
using namespace std;

int main()
{
  void swap(int *a, int *b);
  int num_1,num_2;

  cout << "Enter 2 Numbers: " << endl;
  cin >> num_1 >> num_2;
  cout << "You entered: \nNUM 1: " << num_1 << "\nNUM 2: " << num_2 << endl;
  cout << "After Swapping: " << endl;

  swap(&num_1 , &num_2);
  cout << "NUM 1: " << num_1 << "\nNUM 2: " << num_2 <<endl;

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
