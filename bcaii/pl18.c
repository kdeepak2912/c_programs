/* C 18) Program to accept a year from user and check whether the year is leap year or not.
According to this choice addition/subtraction/multiply/divide the two numbers.
date created @20-01-2018 19:09
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    if(year%4==0&&year)
        printf("leap year");
    else
        printf("not a leap year");
    getch();
}
