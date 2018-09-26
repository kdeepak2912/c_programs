#include<conio.h>
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter three sides of the triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1+s2>s3)||(s1+s3>s2)||(s2+s3>s1))
        printf("Sides of the triangle are valid.");
    else
        printf("Sides of the triangle are not valid.");
    getch();
}
