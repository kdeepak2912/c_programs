#include<conio.h>
#include<stdio.h>
void main()
{
    int i;
    printf("enter value\n");
    scanf("%d",&i);
    if(i<=8)
        goto l;
        else
        {
            printf("hello");
            exit(0);
        }
    l:printf("got is used");
    getch();
}
