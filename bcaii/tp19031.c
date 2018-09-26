/*wap to initialize array of size 8 and display selected index value*/
#include<stdio.h>
#include<conio.h>
void main(){
    int num[]={1,2,3,4,5,6,7,8};
    int i;
    printf("Enter index of the value to be displayed\n");
    scanf("%d",&i);
    if(i>=0&&i<8)
        printf("Value at %dth index is %d\n",i,num[i]);
    else
        printf("Array index out of range.\n");
    printf("array index out of range  %d",num[9]);
    getch();
}
