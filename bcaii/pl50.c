/*find factors of a number
author @adalaxal
date created @15-01-2018 @19:43
date last modified @15-01-2018 @
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("enter a number \n");
    scanf("%d",&num);
    printf("factors of the given number is");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("\n%d",i);
    }
    getch();
}

