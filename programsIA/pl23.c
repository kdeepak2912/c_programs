#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Quotient of the numbers is  %d.",n1/n2);
    printf("\nRemainder of the numbers is  %d.",n1%n2);
    getch();
}
