/*A simple while loop program to print sum of N natural numbers*/

#include<stdio.h>
#include<conio.h>

int main() {
int number,sum=0;

printf("Enter number \n(Till which sum is required): ");
scanf(" %d",&number);

int i=1;
while(i<=number) {
sum+=i;
i++;
}

printf("\nSum of %d natural numbers is: %d",number,sum);

getch();
return 0;

}
