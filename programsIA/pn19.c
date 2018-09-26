#include<stdio.h>
#include<conio.h>
void main()
{
    int bleacher,reserved,box,revenue;
    printf("Enter the number of bleacher, reserved, and box seats sold\n ");
    scanf("%d%d%d",&bleacher,&reserved,&box);
    revenue=bleacher*300+reserved*800+box*1200;
    printf("Total amount of revenue from gate receipt is\n%d",revenue);
    getch();
}
