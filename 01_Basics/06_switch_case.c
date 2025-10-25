/*This program introduces switch case. 
It takes input from user and prints out the day corresponding to that number.
Starting with 1=Monday*/

#include<stdio.h>
#include<conio.h>

int main()
{
int day;
printf("Enter number: ");
scanf(" %d",&day);

switch(day%7)
{
case 0: 
printf("\nSunday");
break;
case 1: 
printf("\nMonday"); 
break;
case 2:
printf("\nTuesday"); 
break;
case 3: printf("\nWednesday"); 
break;
case 4: 
printf("\nThursday"); 
break;
case 5: 
printf("\nFriday"); 
break;
case 6: 
printf("\nSaturday"); 
break;
default:
printf("\nInvalid");
break;
}

getch();
return 0;

}