#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>0)
        printf("Positive number");
    else if(num==0)
        printf("Number is zero");
    else
        printf("Negative number");
    getch();
}
