/*This is a simple array input and display
program.*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int array[8];

  printf("Enter Array Elements: \n");
  for(int i=0; i<8; i++)
    scanf(" %d", &array[i]);
  
  printf("Array: \n");
  for(int i=0; i<8; i++)
    printf(" %d ",array[i]);

  getch();
  return 0;
}
