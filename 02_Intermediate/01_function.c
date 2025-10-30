/*Simple C program using functions to add two integer inputs*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int sum(int a, int b);
  int input_1, input_2;
  printf("Enter 2 numbers to add: \n");
  scanf(" %d %d",&input_1,&input_2);
  printf("\nSum: %d",sum(input_1,input_2));

  getch();
  return 0;
}

int sum( int a, int b)
{
  return a+b;
}
