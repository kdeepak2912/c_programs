/*program of print pattern of cross
date created 02-02-18 @15:23
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            if((r==c)||(r+c==6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

