/*c Program to accept distance in km and time in hrs form user and calculate speed in km/hr. Also convert this speed into m/s.
date created @19-01-2018 14:25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float dist,time,speed;
    printf("enter distance in kilometers and time in hours\n");
    scanf("%f%f",&dist,&time);
    speed= dist/time;
    printf("speed in km/hr:%.2f\n",speed);
    printf("speed in m/s:%.2f",speed*5/8);
    getch();
}
