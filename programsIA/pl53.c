#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,sum=0;
    printf("enter a number \n");
    scanf("%d",&num);
    for(num=num;num>0;num=num/10)
    {
        rem=num%10;
        sum+=rem;
    }
    printf("Sum of the digits if the number is\n%d",sum);
    getch();
}
