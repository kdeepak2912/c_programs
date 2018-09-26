/*WAP to take five subject marks as input from student. Calculate percentage and print division as per the mentioned criteria.
Per > = 70      FIRST DIVISION
Per 55 – 69.9       SECOND DIVISION
Per 40 – 54.9  THIRD DIVISION
Per < 40 FAIL
date created 11-02-2018 @14:00*/
#include<stdio.h>
#include"conio.h"
void main()
{
    float s1,s2,s3,s4,s5,avg;
    printf("Enter marks of five subjects\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    avg=(s1+s2+s3+s4+s5)/5;
    if(avg>=70)
        printf("First!!");
    else if(avg>=55)
        printf("Second Division!!");
    else if(avg>=40)
        printf("Third Division!!");
    else
        printf("Fail");
    getch();
}
