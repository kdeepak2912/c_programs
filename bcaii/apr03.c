#include<stdio.h>
#include<conio.h>
int fib(int n){
    if(n<=1)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}
void main(){
    int n,i;
    printf("Enter the n to find nth term of Fibanocci series\n");
    scanf("%d",&n);
    printf("Fibonacci series upto n is \n");
    for(i=1;i<=n;i++)
        printf("%d,",fib(i));
    getch();
}
