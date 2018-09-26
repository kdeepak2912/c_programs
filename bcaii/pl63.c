/*63) WAP to input two matrices and to perform addition of both.
date created */
#include"stdio.h"
#include"conio.h"
int readnum();
void main()
{
    int ir,ic;
    //reading the first matrix from the user
    printf("************Enter the first matrix**********\n\n");
    int nrows1,ncols1;
    printf("Enter the number of row(s)\n");
    scanf("%d",&nrows1);
    printf("Enter the number of column(s)\n");
    scanf("%d",&ncols1);
    int num1[nrows1][ncols1];
    for(ir=0;ir<nrows1;ir++)    {
        for(ic=0;ic<ncols1;ic++)        {
            printf("Enter the element at %dth row and %dth column \n",ir+1,ic+1);
            scanf("%d",&num1[ir][ic]);
        }
    }

    //reading the second array from the user
    printf("*******Enter the second matrix********\n\n");
    int nrows2,ncols2;
    printf("Enter the number of row(s)\n");
    scanf("%d",&nrows2);
    printf("Enter the number of column(s)\n");
    scanf("%d",&ncols2);
    int num2[nrows2][ncols2];
    for(ir=0;ir<nrows2;ir++)    {
        for(ic=0;ic<ncols2;ic++)        {
            printf("Enter the element at %dth row and %dth column \n",ir+1,ic+1);
            scanf("%d",&num2[ir][ic]);
        }
    }
    //displaying the entered matrices to the user
    printf("\n\n******Entered Elements Of FIRST MATRIX*********\n\n");
    for(ir=0;ir<nrows1;ir++)        {
        for(ic=0;ic<ncols1;ic++)            {
            printf("%d ",num1[ir][ic]);
        }
        printf("\n");
    }

    printf("\n\n******Entered Array Elements Of SECOND MATRIX*********\n\n");
    for(ir=0;ir<nrows2;ir++)        {
        for(ic=0;ic<ncols2;ic++)            {
            printf("%d ",num2[ir][ic]);
        }
        printf("\n");
    }

    //calculating and displaying the sum of the matrices
    if((nrows1==nrows2)&&(ncols1==ncols2))    {
        printf("\n\n******SUM OF THE TWO MATRICES*********\n\n");
        for(ir=0;ir<nrows1;ir++)        {
            for(ic=0;ic<ncols1;ic++)            {
                printf("%d ",num1[ir][ic]+num2[ir][ic]);
            }
            printf("\n");
        }
    }
    else        {
            printf("Number of rows and columns do not match\nCAN NOT PERFORM ADDITION!!");
        }
    getch();
}
