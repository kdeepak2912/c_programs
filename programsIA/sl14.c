#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sf=0,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num/2;++i)
    {
        if(num%i==0)
            sf+=i;
    }
    if(sf==num)
        printf("Perfect number");
    else
        printf("Not a perfect number");
    getch();
}
