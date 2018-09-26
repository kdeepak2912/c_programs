/*program to print pattern */
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,ch=65,sp,c1,c2,c2m=1,space=1;
    for(r=4;r>=1;--r)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c",ch++);
        }
        if(r!=4)
        {
            for(sp=1;sp<=space;sp++)
                printf(" ");
            space+=2;
        }
        for(c2=c;c2>1;--c2)
        {
            if(ch=='E')
                --ch;
            else
            printf("%c",--ch);
        }
        printf("\n");
    }
    getch();
}
