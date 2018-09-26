#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        printf("Leap Year");
    else
        printf("Not a leap year.");
    getch();
}

