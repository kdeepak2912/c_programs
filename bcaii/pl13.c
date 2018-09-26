/* C Program to accept a number from user and check whether the number is even or odd.
date created @19-01-2018 14:56
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("even number");
    else
        printf("odd number");
    getch();
}
