#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ca,cb,cost;
    printf("Enter the amount of feed A and B\n");
    scanf("%d%d",&a,&b);
    ca=a*2;
    cb=b*3;
    cost=ca+cb;
    printf("Amount of feed A=%d\tcost of feed A=%d\n",a,ca);
    printf("Amount of feed B=%d\tcost of feed B=%d\n",b,cb);
    printf("Total cost of ordered feed is\t%d",cost);
    getch();
}
