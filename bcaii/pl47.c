/*sum of n terms of fibannocci series
author @adalaxal
date created @15-01-2018 @20:02
date last modified @15-01-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int ft=0,st=1,term=1,sum=0,n,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("\n\n**********FIBANOCCI SERIES*************\n");
    printf("%d\n%d",ft,st);
    for(i=1;i<n-1;i++)
    {
        term=ft+st;
        ft=st;
        st=term;
        printf("\n%d",term);
        sum+=term;
    }
    printf("\nsum of terms is\n%d",sum);
}
