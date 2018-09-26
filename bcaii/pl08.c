/*c Program to accept temperature in Celsius form user and convert this temperature from Celsius to Fahrenheit
date created @19-01-2018 14:25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float celsius;
    printf("enter temperature in celsius\n");
    scanf("%f",&celsius);
    printf("temperature in fahrenheit :%.2f", celsius*1.8+32) ;
    getch();
}
