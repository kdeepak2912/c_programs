#include<stdio.h>
#include<conio.h>
void main(){
    int r1,r2,c1,c2,i,j,k;
    printf("Enter rows and columns of FIRST matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of SECOND matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r2!=c1){
        printf("Matrix multiplication not possible!!");
        exit(0);
    }
    int A[r1][c1];
    int B[r2][c2];
    printf("\n\t\t<<<<<<<<<<FIRST MATRIX>>>>>>>\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\nEnter elements at [%d][%d]\t",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\t\t<<<<<<<<<<SECOND MATRIX>>>>>>>\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\nEnter elements at [%d][%d]\t",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    //matrix multiplication
    int C[c1][r2];
    for(i=0;i<c1-1;i++){
        for(j=0;j<r2-1;j++){
                C[i][j]=0;
            for(k=0;k<c1-1;k++){
                C[i][j]+=A[i][j]*B[j][i];
            }
        }
    }
    printf("\t\t<<<<<<<<<REULTANT MATRIX>>>>>>>>>>>> \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
