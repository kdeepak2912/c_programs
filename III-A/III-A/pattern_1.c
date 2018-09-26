#include<stdio.h>
#include<conio.h>
main (void){
    int n,i,j,num,n_n=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=n+1;i>=1;i--){
        num=++n_n;
        for(j=i;j>1;j--){
            printf(" ");
        }
        for(j=1;j<num;j++){
            printf("%d",j);
        }
        for(j=num-2;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
