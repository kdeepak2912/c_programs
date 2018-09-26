#include<stdio.h>
#include<conio.h>
int fib(int n){
    if(n<=1)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}
void main(){
    int n,res;
    printf("Enter the n to find nth term of Fibanocci series\n");
    scanf("%d",&n);
    printf("%dth term of the fibonacci series is %d",n,fib(n));
    getch();
}
