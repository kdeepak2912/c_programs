/*
25) Program to print the following pattern:
*
**
***
****

date created @21-01-2018 @15:09
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
