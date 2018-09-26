#include<conio.h>
#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("Enter three angles of the triangle\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
        printf("Angles of the triangle are VALID.");
    else
        printf("Angles of the triangle are NOT VALID.");
    getch();
}

