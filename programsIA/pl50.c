#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        sum+=i;

        printf("Sum of all natural numbers upto n is\n%d",sum);
        getch();
}




