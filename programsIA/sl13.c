#include<stdio.h>
#include<conio.h>
void main()
{
    int t1=0,t2=1,n,i,nt;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("Fibonacci series upto n terms\n");
    for(i=0;i<n;++i)
    {
        printf("%d ",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    getch();
}
