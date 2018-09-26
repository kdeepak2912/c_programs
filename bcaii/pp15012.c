/*
basic salary of ramesh is read from keyboard
da is 40% of basic salary
hra is 20% of basic salary

*/
#include<conio.h>
#include<stdio.h>
void main()
{
    long int sal,gsal,hra,da;
    printf("enter salary\n ");
    scanf("%ld",&sal);
    hra=sal*20/100;
    da=sal*40/100;
    gsal=sal+hra+da;
    printf("gross salary is \n%ld", gsal);

}
