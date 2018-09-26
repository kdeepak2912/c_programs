#include<conio.h>
#include<stdio.h>
void main()
{
    int s1,s2,s3,vol;
    printf("Enter dimensions of the box in centimeters\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    printf("Volume of the box is %d in cubic centimeters.",s1*s2*s3);
    getch();
}
