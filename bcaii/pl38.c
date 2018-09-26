/*program to separate digits of a number using while loop
date created 16-01-2018 @09:18
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("digits of the given number are");
    while(num>0)
    {
        rem=num%10;
        printf("\n%d",rem);
        num/=10;
    }
    getch();
}
