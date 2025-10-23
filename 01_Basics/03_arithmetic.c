#include<stdio.h>
#include<conio.h>

int main()
{
float num_1,num_2;

printf("Enter 2 numbers: ");
scanf(" %f %f",&num_1,&num_2);

printf("\nSum = %.2f",num_1+num_2);
printf("\nDifference = %.2f",num_1-num_2);
printf("\nMultiplication = %.2f",num_1*num_2);
printf("\nDivision = %.2f",num_1/num_2);

getch();
return 0;
}
