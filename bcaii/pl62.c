/*62) WAP to take a matrix as input from user and print it.
date created */
#include"stdio.h"
#include"conio.h"
void main()
{
    int ir,ic,nrows,ncols;
    printf("Enter the number of row(s)\n");
    scanf("%d",&nrows);
    printf("Enter the number of column(s)\n");
    scanf("%d",&ncols);
    int num[nrows][ncols];

    for(ir=0;ir<nrows;ir++)
    {
        for(ic=0;ic<ncols;ic++)
        {
            printf("Enter the element at %dth row and %dth column \n",ir+1,ic+1);
            scanf("%d",&num[ir][ic]);
        }
    }

    printf("******Entered Array Elements*********\n\n");
    for(ir=0;ir<nrows;ir++)
    {
        for(ic=0;ic<ncols;ic++)
        {
            printf("%d ",num[ir][ic]);
        }
        printf("\n");
    }
}
