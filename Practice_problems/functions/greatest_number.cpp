/*This is a function that return the greatest of 3 numbers input by the user*/

#include<iostream>
using namespace std;

int main()
{
  int greatest(int *a, int *b, int *c);
  int num_1,num_2,num_3;

  cout << "Enter 3 Numbers: " << endl;
  cin >> num_1 >> num_2 >> num_3;

  cout << "The greatest number is: " << greatest(&num_1 , &num_2, &num_3) << endl;

  cin.ignore();
  cin.get();
  return 0;
}

int greatest(int *a, int *b, int *c)
{
  if(*a > *b && *a > *c)
    return *a;
  else if(*b > *a && *b > *c)
    return *b;
  else
    return *c;
}
