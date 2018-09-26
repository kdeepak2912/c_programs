
/*Program to find the sum of the following series. Take the no. of terms as input from user:
1+11+111+1111+11111+………
author @adalaxal
date created @15-01-2018 @19:46
date last modified @15-01-2018 @
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,term=1;
    printf("enter number of terms \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+term;
        term=term*10+1;
    }
    printf("sum of the series is \n%d",sum);
    getch();
}

