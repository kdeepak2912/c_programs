/*8.WAP to take an integer as an input from user and display its hexadecimal and octal equivalent by user-defined function.
date created 13-02-2018 @18:32*/
#include<stdio.h>
#include<conio.h>
void hex(int);
void oct(int);
void main(){
    int num;
    printf("Enter a num\n");
    scanf("%d",&num);
    hex(num);
    oct(num);
    getch();
}
void hex(int n){
    printf("Hexadecimal equivalent of %d is %X\n",n,n);
}
void oct(int n){
    printf("Octal equivalent of %d is %o",n,n);
}
