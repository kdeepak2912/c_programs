/*wap to read float of array of % elements and display them*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    float num[5];
    printf("Enter 5 float numerals\n");
    for(i=0;i<5;i++)
        scanf("%f",&num[i]);
    printf("Entered float values are\n");
    for(i=0;i<5;i++)
        printf("%f\n",num[i]);
    getch();
}
