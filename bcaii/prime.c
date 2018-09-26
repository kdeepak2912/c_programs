#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    printf("Enter a num\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            --fact;
            break;
        }
    }
    if(fact)
    {
        printf("prime number");
    }
    else
        printf("not a prime number");
    getch();
}
