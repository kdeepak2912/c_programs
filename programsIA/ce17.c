#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,d,surface,charge;
    printf("Enter the length, breadth, and depth of the pool\n");
    scanf("%d%d%d",&l,&b,&d);
    surface=2*d*(l+b)+l*b;
    charge=surface*2;
    printf("Cost of resurfacing the pool is\n%d",charge);
    getch();
}
