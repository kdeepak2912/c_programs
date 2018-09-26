/*wap to find prime number using recursion*/
#include<stdio.h>
#include<conio.h>
primenum(int,int);
void main(){
    int n,prime=0;
    printf("Enter a number to check for prime");
    scanf("%d",&n);
    prime=primenum(n,n/2);
    if(prime)
        printf("%d is Prime Number.",n);
        else
        printf("%d is not a Prime Number.",n);
    getch();
}

primenum(int n,int i){
    if(i==1)
        return 1;
    else
        if(n%i==0)
            return 0;
        else
            return primenum(n,i-1);
}
