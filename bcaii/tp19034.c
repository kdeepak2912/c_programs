/*wap read 5 elements and add 1,2,3,4,5 to each element*/
#include<stdio.h>
#include<conio.h>
void main(){
    int num[5],i;
    printf("Enter 5 values\n");
    for(i=0;i<5;i++)
        scanf("%d",&num[i]);
    for(i=0;i<5;i++)
        num[i]=num[i]+(i+1);
    printf("Updated values are\n");
    for(i=0;i<5;i++)
        printf("%d\n",num[i]);
    getch();
}
