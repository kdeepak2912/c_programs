#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,n,i,sum=0;
    p=NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    p=realloc(p,n);
    printf("Enter the elements\n");
    if(p==NULL){
        printf("Memory Allocation Unsuccessful\n");
        exit(0);
    }
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
        sum=sum+*(p+i);
    }
    free(p);
    printf("Sum of the elements is %d\n",sum);
    printf("You have entered the following elements\n");
    for(i=0;i<n;i++)
        printf("\n%d",*(p+i));
    getch();
}
