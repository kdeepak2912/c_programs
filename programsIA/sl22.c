#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,sum;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum+=i*i;
    }
    printf("Sum of the series is\t%d",sum);
    getch();
}
