#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<n;++i)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
        printf("Perfect number.");
        else
        printf("Not a perfect number.");
    getch();
}
