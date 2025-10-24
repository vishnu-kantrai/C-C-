/*This program is a nested if-else statement to find the largest numbers out of the 3 numbers provided by the user.
First it compares a and b and then compares the largest if it is larger than c too*/

#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;
printf("Enter 3 Numbers [a/b/c]: ");
scanf(" %d%d%d",&a,&b,&c);

if(a>=b)
{
if(a>=c)
printf("\nLargest of these 3 numbers is: %d\n",a);
else
printf("\nLargest of these 3 numbers is: %d\n",c);
}

else
{
if(b>=c)
printf("\nLargest of these 3 numbers is: %d\n",b);
else
printf("\nLargest of these 3 numbers is: %d\n",c);
}

getch();
return 0;
}