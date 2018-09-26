/*n terms of fibannocci series
author @adalaxal
date created @19-01-2018 @14:51
date last modified @19-01-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int ft=0,st=1,term=0,n;
    printf("enter a number\n");
    scanf("%d",&n);
    while(term<n)
    {
        printf("%d\n",term);
        term=ft+st;
        ft=st;
        st=term;
    }
    getch();

}

