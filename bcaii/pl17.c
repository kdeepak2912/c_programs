/* C 17) Program to input two numbers from user and accept user choice.
According to this choice addition/subtraction/multiply/divide the two numbers.
date created @20-01-2018 18:50
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,result;
    char choice;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("enter '+' for addition, '-' for subtraction,\n '*' for multiplication, and '/' for division\n");
    scanf(" %c",&choice);
    if(choice=='+')
        result=num1+num2;
    if(choice=='-')
        result=num1-num2;
    if(choice=='*')
        result=num1*num2;
    if(choice=='/')
        result=num1/num2;
    printf("Result:%d",result);
    getch();
}
