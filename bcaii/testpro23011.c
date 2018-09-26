/*If a four-digit number is input through the keyboard,
 write a program to obtain the sum of the first and last digit of this number.
*/
#include<stdio.h>
#include<conio.h>
void  main()
{
    int num,rem,sum=0;
    printf("enter a 4 digit number\n");
    scanf("%d",&num);
    rem=num%10;
    sum+=rem;
    num/=1000;
    sum+=num;
    printf("sum of first and last digit:%d",sum);
    getch();
}
