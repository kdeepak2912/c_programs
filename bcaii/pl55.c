/*55) WAP to calculate sum of digits of a five digit number using function
date created 11-02-2018 @13:45*/
#include<stdio.h>
#include<conio.h>
void sum(long int);
void main()
{
    long int num;
    printf("Enter a number\n");
    scanf("%ld",&num);
    sum(num);
    getch();
}
void sum(long int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of the digits of the number is %d",sum);
}
