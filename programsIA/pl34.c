#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter month number\n");
    scanf("%d",&num);
    if((num==1)||(num==3)||(num==5)||(num==7)||(num==8)||(num==10)||(num==12))
        printf("The month has 31 days.");
    if(num==2)
        printf("The month has 28/29 days.");
    if(num==4||num==6||num==9||num==11)
        printf("The month has 30 days.");
    getch();
}

