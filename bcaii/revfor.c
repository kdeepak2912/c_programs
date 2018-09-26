#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    int numo=num;
    for(;num>0;num/=10)
    {
        rev=rev*10+num%10;
    }
    printf("reverse of %d is %d",numo,rev);
    getch();
}

