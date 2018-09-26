#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Even numbers upto n are\n");
    for(i=1;i<=n;++i)
        if(i%2==0)
        printf("%d\n",i);

        getch();
}

