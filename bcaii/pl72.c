/*72) WAP to create a function without return and parameters.
date created 11.02.2018 @18:45*/
#include"stdio.h"
#include"conio.h"
void square(int);
void main()
{
    int num;
    printf("Enter a number to find square\n");
    scanf("%d",&num);
    square(num);
    getch();
}
void square(int n)
{
    printf("Square of %d is %d",n,n*n);
}
