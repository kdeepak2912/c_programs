/* C 15) Program to accept two numbers from user and find the smaller of two numbers.
date created @20-01-2018 18:46
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
    else if(num1<num2)
        printf("first number is smaller");
    else
        printf("second number is smaller");
    getch();
}
