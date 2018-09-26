/*print prime numbers between 1 to 1000
author @adalaxal
date created @15-01-2018 @19:32
date last modified @15-01-2018 @19:42
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("prime numbers in the range of 1 to 1000\n");
    for(i=1;i<=1000;i++)//loop to generate numbers from 1 to 1000
    {
        int j,fcount=1;
        for(j=2;j<=i/2;j++)//loop to check for prime numbers
        {
            if(i%j==0)
            {
                --fcount;
                break;
            }
        }
        if(fcount)
            printf("%d\n",i);
    }
    getch();
}
