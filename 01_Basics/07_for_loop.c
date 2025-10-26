/*This is basic program using for loop to print 
table of the number input by user.*/

#include<stdio.h>
#include<conio.h>

int main() {
int number;
printf("Enter the number\n(The table you want\n");
scanf(" %d",&number);

printf("Multiplication Table: \n");
for(int i=1; i<=10; i++)
printf(" %d × %d = %d\n", number,i,number*i);

getch();

return 0;
}