#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a num\n");
    scanf("%d",&num);
    printf("Hexadecimal of %d is %X\n",num,num);
    printf("Octal of %d is %o",num,num);
    getch();
}
