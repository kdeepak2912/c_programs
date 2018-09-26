/*c Program to accept two numbers from user and swap these numbers without using third variable.
date created @19-01-2018 14:46
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("num1=%d\nnum2=%d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("numbers after swapping \nnum1=%d \nnum2%d",num1,num2);
    getch();
}
