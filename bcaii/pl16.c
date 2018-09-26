/* C 16) Program to accept a number from user and check whether the number is positive/negative or zero.
date created @20-01-2018 18:48
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter a numbers\n");
    scanf("%d",&num);
    if(num<0)
        printf("negative number");
    else if(num==0)
        printf("number is equal to zero");
    else
        printf("number is positive");
    getch();
}
