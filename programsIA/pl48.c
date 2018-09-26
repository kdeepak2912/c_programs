#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("All even numbers from 1 to n\n");
    for(i=1;i<=n;++i)
        if(i%2==0)
        printf("%d\n",i);
        getch();
}



