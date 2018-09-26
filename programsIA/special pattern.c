#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<5;++i)
    {
        for(j=1;j<=i;++j)
        {
            if(j>3)
            break;
            printf("*");
        }
        printf("\n");
    }
    getch();
}
