/*54) WAP to calculate sum of
 first and last digit
 of a four digit number
without using loop using function.
*/
#include<stdio.h>
#include<conio.h>
int sum_d(int);
void  main()
{
    int num;
    printf("enter a 4 digit number\n");
    scanf("%d",&num);
    printf("sum of first and last digit :  %d",sum_d(num));
    getch();
}
int sum_d(int num)
{
    int sum=0,rem;
    sum+=num%10;
    sum+=num/1000;
    return sum;
}
