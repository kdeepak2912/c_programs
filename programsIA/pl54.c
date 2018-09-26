#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,n,i,sum;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("Fibonacci series upto n terms\n");
    for(i=0;i<n;++i)
    {
        printf("%d ",sum);
        sum=a+b;
        a=b;
        b=sum;
    }
    getch();
}

