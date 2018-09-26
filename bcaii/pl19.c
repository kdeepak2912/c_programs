/* C 19) Program to input three numbers from user and find the maximum of three numbers.
date created @20-01-2018 19:15
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
        printf("first number is largest");
    else if(num2>num3)
        printf("second number is largest");
    else
        printf("third number is largest");
    getch();
}
