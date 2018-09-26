/*WAP to generate all combinations of 1,2 and 3 using for loop.
date created @10-02-2018 @9:08
*/
#include<stdio.h>
#include<conio.h>
void main()
{

    int l1,l2,l3;
    for(l1=1;l1<=3;l1++)
        for(l2=1;l2<=3;l2++)
            for(l3=1;l3<=3;l3++)
            printf("%d%d%d\n",l1,l2,l3);
    getch();
}
