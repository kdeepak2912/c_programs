#include<stdio.h>
#include<conio.h>
void main(){
    int r,c;
    printf("Enter order of matrix\n");
    scanf("%d%d",&r,&c);
    int n[r][c];
    int i,j;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&n[i][j]);
    printf("You havce entered the following elements\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                printf("%d\t",n[i][j]);
            printf("\n");
        }
        //code to swap the elements
        int t;
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++){
                t=n[i][j+1];
                n[i][j+1]=n[i][j];
            }
        }
        n[0][0]=n[r-1][r-2];
        printf("Array after changing\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                printf("%d\t",n[i][j]);
            printf("\n");
        }

    getch();
}
