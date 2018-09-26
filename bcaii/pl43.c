/*program to find factorial of a number using while loop
date created 16-01-2018 @09:29
*/
#include<stdio.h>//inclusion of header files
#include<conio.h>
void main() //main function
{
    int num,i,fact=1;//variable declaration
    printf("enter a number\n");
    scanf("%d",&num);//reading a number from user
    while(num>0)
    {
        fact*=num;
        --num;
    }
    printf("factorial of the given number is \n%d", fact);//printing sum of digits of the given number
    getch();
}



