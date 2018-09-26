/*24) Program to print the following pattern:
		*
        *
        *
        *

*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=0;r<4;r++)
        {
        for(c=0;c<4;c++)
        {
                if(c==3)
                printf("*");
                else
                    printf("  ");
        }
        printf("\n");
    }
        getch();
}

