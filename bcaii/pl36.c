/*WAP to add first seven terms of series using for loop: 1/1! + 2/2! + ……….
date created 10-02-2018 @19:15*/
#include<conio.h>
#include<stdio.h>
int fact(int);
void main()
{
        int v24;
        float sum=0;
        for(v24=1;v24<=7;v24++)
        {
            sum+=v24/fact(v24);
        }
        printf("sum of the series is %.2f",sum);
        getch();
}

int fact(int n)
{
    int fctrl=1;
    while(n>0)
    {
        fctrl*=n;
        n--;
    }
    return (fctrl);
}
