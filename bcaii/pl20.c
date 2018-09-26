/* C 20) Program to display the number of days in a month based on user input using SWITCH.
 E.g. if input is 1 display no of days=31,2  display no. of days =28/29,etc
date created @20-01-2018 19:20
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int month;
    printf("enter month numbers\n");
    scanf("%d",&month);
    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("the month has 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("the month has 30 days");
        break;
    case 2:
        printf("28 0r 29 days");
        break;
    default:
        printf("Invalid Choice!!");
    }
    getch();
}
