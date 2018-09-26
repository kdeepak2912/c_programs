#include<conio.h>
#include<stdio.h>
void main()
{
    int n,n1;
    printf("Enter two numbers \n");
    scanf("%d%d",&n,&n1);
    printf("Numbers before swapping are\na==%d\nb=%d",n,n1);
    n=n+n1;
    n1=n-n1;
    n=n-n1;
    printf("\n\nNumbers after swap are\na=%d\nb=%d",n,n1);
    getch();
}

