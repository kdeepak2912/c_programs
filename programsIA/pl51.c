#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        if(i%2==0)
        sum+=i;

        printf("Sum of even numbers upto n is\n%d",sum);
        getch();
}



