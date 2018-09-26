/*33) Program to take any number as input. Print table of this number.

date created @21-01-2018 @15:26
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("enter a number to print table\n");
    scanf("%d",&num);
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",num,i,(num*i));
    }
    getch();
}
