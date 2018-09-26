/*c program to read radius of circle and print area and perimeter
date created @18-012018 19:25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float radius;
    printf("enter radius of circle\n");
    scanf("%f",&radius);
    printf("Area if circle:%.2f",3.14*radius*radius);
    printf("\nPerimeter of the circle:%.2f",2*3.14*radius);
    getch();
}
