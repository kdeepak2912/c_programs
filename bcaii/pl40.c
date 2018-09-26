/*program to reverse of a number using while loop
date created 16-01-2018 @09:35
*/
#include<stdio.h>//inlcusion of header files
#include<conio.h>
void main() //main function
{
    int num,rem,rev=0;//variable declaration
    printf("enter a number\n");
    scanf("%d",&num);//reading a number from user
    while(num>0)    //loop to find sum of digits of the given number
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("reverse of the number is \n%d", rev);//printing sum of digits of the given number
    getch();
}


