#include<conio.h>
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter two numbers to swap them without using third variable\n");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;;
    num2=num1-num2;
    num1=num1-num2;
    printf("First number is %d and second number is  %d.",num1,num2);

    getch();

}

