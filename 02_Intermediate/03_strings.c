/*Program to i troduce strings in c language
It takes the i put of user's name and displays 
it on terminal*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char name[21];
  printf("Enter your name: ");
  scanf("%20[^\n]", name);

  printf("\nYour name is: %s", name);

  getch();
  return 0;
}
