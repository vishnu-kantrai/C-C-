#include<stdio.h>

void swap(int*x, int*y);

int main()
{
  int num_1, num_2;
  printf("Enter two numbers: ");
  scanf(" %d %d",&num_1,&num_2);

  printf("Before Swapping:\n1st number: %d\n2nd number: %d", num_1,num_2);
  swap(&num_1, &num_2);
  printf("\nAfter Swapping:\n1st number: %d\n2nd number: %d", num_1,num_2);

  cin.ignore();
  cin.get();
  return 0;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
