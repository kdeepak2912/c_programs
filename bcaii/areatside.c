/*WAP to find area of triangle by reading the sides of the triangle
date created 16-01-2018  @09:45
variables used in the program
s1, s2, and s3 denote the three sides of the triangle
semip denotes the semi perimeter of the triangle
area denotes the area of the triangle
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float s1,s2,s3,semip,area;
    printf("enter the three sides of the triangle\n");
    scanf("%f%f%f",&s1,&s2,&s3);//reading the three sides of the triangle
    semip=(s1+s2+s3)/2;//calculating the semi perimeter of the triangle
    area=sqrt(semip*(semip-s1)*(semip-s2)*(semip-s3));
    printf("area of the triangle is \n %f",area);
    getch();

}
