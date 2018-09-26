/*program to change numbers from one system to another by accepting choice from the user
date created 30-01-2018 @ 09:25
date last modified 30-01-2018 @09:47 */
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void binary(int num);
void octal(int num);
void hex_dec(int num);
void main()
{
    int num,choice;
    printf("\t\t<<<<<<<<<<<MENU>>>>>>>>>>>>>\n");
    printf("Enter 1 to convert decimal to binary\n");
    printf("Enter 2 to convert decimal to octal\n");
    printf("Enter 3 to change decimal to hexadecimal\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter a number\n");
    scanf("%d",&num);
        binary(num);
    }
    else if(choice==2)
    {
        printf("Enter a number\n");
    scanf("%d",&num);
        octal(num);
    }
    else if(choice==3)
    {
        printf("Enter a number\n");
    scanf("%d",&num);
        hex_dec(num);
    }
        else
            printf("You have entered wrong choice!!");

    getch();
}

void binary(int num)
{
    long int bin_num[50];
    int index=0,i;
    while(num>0)
    {
        bin_num[index]=num%2;
        num/=2;
        index++;
    }
    for(i=index-1;i>=0;i--)
   {
        printf("%d",bin_num[i]);
    }
}

void octal(int num)
{
    /*long int oct_num[50];
    int index=0,i,control;
    while(num>0)
    {
        oct_num[index]=num%8;
        num/=8;
        index++;
    }*/

    printf("Number in Octal system: %o",num);
}

void hex_dec(int num)
{
    printf("Number in Hexadecimal System: %0X",num);
}
