/*program to sum of  digits of a number using while loop
date created 16-01-2018 @09:18
*/
#include<stdio.h>//inlcusion of header files
#include<conio.h>
void main() //main function
{
    int num,rem,sum=0;//variable declaration
    printf("enter a number\n");
    scanf("%d",&num);//reading a number from user
    while(num>0)    //loop to find sum of digits of the given number
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("sum of the digits of the number is \n%d", sum);//printing sum of digits of the given number
    getch();
}

