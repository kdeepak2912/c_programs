/*) WAP to design a calculator program using switch case as well as function. User can perform calculations as many times he/she wants. [HINT : y/Y to continue]
date created 10-02-2018 @19:42
*/
#include<stdio.h>
#include<conio.h>
void add(float a,float b)
{
    printf("Addition of %.2f and %.2f is %.2f",a,b,(a+b));
}
void sub(float a,float b)
{
    printf("Subtraction of %.2f and %.2f is %.2f",a,b,(a-b));
}
void mul(float a,float b)
{
    printf("Multiplication of %.2f and %.2f is %.2f",a,b,(a*b));
}
void div(float a,float b)
{
    if(b==0)
        printf("Can not divide by zero!!");
    else
        printf(" of %.2f and %.2f is %.2f",a,b,(a/b));
}

void main()
{
    do{
            float num1,num2;
            printf("enter + to add\n- to subtract\n* to multiply\nand / to divide\n");
            char choice;
            scanf(" %c",&choice);
            printf("Enter two numbers\n");
            scanf("%f%f",&num1,&num2);
            switch(choice)
            {
            case '+':
                add(num1,num2);
                break;
            case '-':
                sub(num1,num2);
                break;
            case '*':
                mul(num1,num2);
                break;
            case '/':
                div(num1,num2);
                break;
            default:
                printf("Invalid Choice!!");
            }
        char cont;
        printf("\n\nenter y/Y to continue or any other character to exit");
        scanf(" %c",&cont);
        if(cont=='y'||cont=='Y')
            continue;
        else
            break;
      }while(1);
}
