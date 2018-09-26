
#include<stdio.h>
#include<conio.h>

void main()
{
    int num,fact=1;
    printf("Enter number to find factorial\n");
    scanf("%d",&num);
    while(num>0)
    {
        fact=fact*num;
        --num;
    }
    printf("Factorial of the number is \n %d ",fact);
    getchar( );
}

