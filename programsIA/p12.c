#include<conio.h>
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter the three sides of triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1>s3+s2)||(s2>s1+s3)||(s3>s1+s2))
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
    getch();
}
