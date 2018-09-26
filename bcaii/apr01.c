#include<stdio.h>
#include<conio.h>
long int rec(int n){
    if(n==1)
        return 1;
    else
        return n*rec(n-1);
}
void main(){
    int num;
    long int res;
    printf("Enter a number to find its factorial\n");
    scanf("%d",&num);
    printf("Factorial of %d is %ld.",num,rec(num));
    getch();
}
