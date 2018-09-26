/*check for armstrong number
author @adalaxal
date created @15-01-2018 @20:13
date last modified @15-01-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,numo,rem,arm=0;
    printf("enter the number\n");
    scanf("%d",&num);
    numo=num;
    while(num>0)
    {
        rem=num%10;
        arm+=rem*rem*rem;
        num/=10;
    }
    if(numo==arm)
        printf("ärmstrong number");
    else
        printf("not a armstrong number");
    getch();
}
