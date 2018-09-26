/* C 14) Program to accept two numbers from user and find the larger of two numbers.
date created @19-01-2018 14:56
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
        printf("numbers are equal");
    else if(num1>num2)
        printf("first number is larger");
    else
        printf("second number is larger");
    getch();
}
