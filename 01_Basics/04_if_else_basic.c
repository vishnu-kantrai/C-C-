/*This is a basic C conditional program using if-else statements.
here an input is taken from user to check whether it is positive, negative or zero*/

#include<stdio.h>
#include<conio.h>

int main()
{
int num;
printf("Enter a Number: ");
scanf(" %d",&num);

if(num>0)
printf("\nYou entered a POSITIVE number\n");
else if(num<0)
printf("\nYou entered a NEGATIVE number\n");
else
printf("\nYou entered ZERO\n");

getch();
return 0;
}