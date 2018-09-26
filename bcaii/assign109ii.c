/*ii-	1! + 2! + 3! + ………………………………… + n!
date created 13-02-2018 @2041*/
#include<stdio.h>
#include<conio.h>
void sum(int);
fact(int);
void main(){
    int num;
    printf("Enter a num\n");
    scanf("%d",&num);
    sum(num);
    getch();
}
void sum(int n){
    long int sum=0;
    while(n){
        sum+=fact(n);
        --n;
    }
    printf("Sum of the series is %ld",sum);
}
fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
