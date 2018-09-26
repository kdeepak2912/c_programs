/*WAP to find greater number among the two numbers through conditional operator.
date created 11-02-2018 @13:55*/
#include"stdio.h"
#include"conio.h"
void main(){
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Larger number among %d and %d is %d",n1,n2,(n1>n2)?n1:n2);
    getch();
}
