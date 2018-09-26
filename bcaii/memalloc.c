#include<stdio.h>
#include<conio.h>
void main(){
    int n,*p,i,sum=0;
    printf("Enter the num of elements\n");
    scanf("%d",&n);
    p=(int *)calloc(n,2);

    if(p==NULL){
        printf("Memory allocation unsuccessful!");
            exit(0);
    }

    for(i=0;i<n;i++)
        printf(" def val at %d  is %d\n",i,*(p+i));

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
         scanf("%d",(p+i));

    printf("You have entered\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
    getch();
}
