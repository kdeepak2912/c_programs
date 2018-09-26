#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter the three sides of triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1==s2&&s2==s3&&s1==s3)
        printf("Equilateral triangle");
    else if((s1==s2)||(s2==s3)||(s1==s3))
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
    getch();
}
