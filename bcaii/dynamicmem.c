#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int n,avg,i,*p,sum=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    p=(int *)malloc(n*2);//typecasting the integer result to int type
    if(p==NULL){//checking if the memory allocation is successful or not
        printf("Memory allocation unsuccessful");
        exit(0);//terminating the program if memory allocation is unsuccessful
    }
    for(i=0;i<n;i++)//loop to show default values of the var
        printf("\n%d",*(p+i));

    for(i=0;i<n;i++)//reading the elements from the user
        scanf("%d",(p+i));
    for(i=0;i<n;i++){//displaying the elements
        printf("\n%d",*(p+i));
        sum=sum+*(p+i);
    }
    printf("sum of numbers is %d \n average is %d",sum,sum/n);
    getch();}
