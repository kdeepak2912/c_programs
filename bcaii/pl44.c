/*program to check whether a given number is palindrome or not
date created 16-01-2018 @09:33
*/
#include<stdio.h>//inclusion of header files
#include<conio.h>
void main() //main function
{
    int num,numo,rem,pal=0;//variable declaration
    printf("enter a number\n");
    scanf("%d",&num);//reading a number from user
    numo=num;
    while(num>0)
    {
        rem=num%10;
        num/=10;
        pal=pal*10+rem;
    }
    if(numo==pal)
    printf("palindrome number");
    else
        printf("not a palindrome number");

    getch();
}



