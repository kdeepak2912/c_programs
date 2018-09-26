#include<stdio.h>
#include<conio.h>
void main()
{
    int a1,a2,a3;
    printf("Enter angles of a triangles\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if((a1+a2+a3)==180)
        printf("given angles are valid for a triangle.");
    else
        printf("given angles are not valid for a triangle.");

    getch();
}

