#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        sum=sum+i;
    printf("Sum of numbers up to n is\n%d",sum);

        getch();
}


