/*n terms of fibannocci series
author @adalaxal
date created @15-01-2018 @20:10
date last modified @15-01-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int ft=0,st=1,term,n,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("%d\n%d",ft,st);
    for(i=1;i<n-1;i++)
    {
       // printf("%d\n",term);
        term=ft+st;
        ft=st;
        st=term;
        printf("\n%d",term);
           }
    getch();
}
