
/*check for prime number
author @adalaxal
date created @15-01-2018 @19:52
date last modified @15-01-2018 @
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
            if(num%i==0)
            {
                --fact;
                break;
            }
    }
    if(fact)
        printf("prime number");
    else
        printf("not a prime number");
    getch();
}


