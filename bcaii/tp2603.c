#include<stdio.h>
#include<conio.h>
void main(){
    float num[2][3];
    int r,c;
    printf("Enter array elements\n");
    for(r=0;r<2;r++)
        for(c=0;c<3;c++)
            scanf("%f",&num[r][c]);
    printf("You have entered the following elements of the 2-d array\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
            printf("%f\t",num[r][c]);
        printf("\n");
    }
        getch();
}
