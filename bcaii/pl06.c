/*c program to read principle, rate and time period and calculate simple interest
date created @18-012018 19:30
date last modified @18-01-2018 19:30
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float prin,rate,time,si;
    printf("enter principle amount, rate of interest, and time period\n");
    scanf("%f%f%f",&prin,&rate,&time);
    printf("Simple Interest :%f",(prin*rate*time)/100);
    getch();
}
