#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,sum=0;
    printf("enter a number \n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("Sum of the digits if the number is\n%d",sum);
    getch();
}
