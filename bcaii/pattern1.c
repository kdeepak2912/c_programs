/*
WAP to print a pattern with triangular space
date created 31-01-2018 @14:23

divide the pattern in three parts, viz first rectangular column, space triangle, and second triangle
use loops and conditions to control the printing the pattern
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c1,c2,c2m=5,space=1,sploop=0;
    for(r=5;r>=1;r--)
    {
        for(c1=1;c1<=r;c1++)//loop to print first triangle
        {
            if(c1>=5)
                continue;
            printf("*");
        }

        if(r!=5)
        {
            for(sploop=1;sploop<=space;sploop++)//loop to manage space of the pattern
                printf(" ");
            space+=2;
        }

        for(c2=1;c2<=c2m;c2++)//loop to print second triangle
            printf("*");
        c2m--;
        printf("\n");
    }
    getch();
}
