/*76) WAP to calculate factorial of a number using recursion.
date created 13-02-2018 @1900*/
#include<stdio.h>
int fact(int);
main(){
    int num,f;
    printf("Enter a num\n");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return (n*fact(n-1));
}
