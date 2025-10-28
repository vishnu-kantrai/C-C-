/*Program to add real numbers entered by user. Displays the SUM when '0' is entered.*/

#include<stdio.h>
#include<conio.h>

int main() {
  double input, sum=0;
  do
    {
      printf("Enter Number to ADD (0 to print SUM): ");
      scanf(" %lf", &input);
      puts("\n");
      sum += input;
    }
    while(input != 0);
  printf("\nSUM is = %lf",sum);

  getch();
  return 0;
}
