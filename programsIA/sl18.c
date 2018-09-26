#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=0;
    for(i=1;i<6;++i)
    {
        for(j=1;j<6;++j)
            printf("%d  ",++n);
        printf("\n");
    }
    getch();
}

