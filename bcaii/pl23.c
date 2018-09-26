/* C 23)Program to print first n natural numbers using for loop.(1,2,3,4……..n)
date created @20-01-2018 19:57
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("\n%d",i);
        getch();
}
