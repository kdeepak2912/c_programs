#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main(){
    int num1,num2;
    printf("enter two numbers to swap\n");
    scanf("%d%d",&num1,&num2);
    swap(num1,num2);
    getch();
}

void swap(int n1,int n2){
    printf("\nnum1=%d\nnum2=%d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("numbers after swapping\nnum1=%d\nnum2=%d",n1,n2);
}
