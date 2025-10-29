/* This is a simple ternary program to compare 
two numerical inputs by the user*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers to compare: \n");
    scanf("%d %d",&a,&b);

    (a == b) ? printf("\n%d = %d\n",a,b)
             : (a > b) ? printf("\n%d > %d\n",a,b)
                        : printf("\n%d > %d\n",b,a);

    getch();
  
    return 0;
}
