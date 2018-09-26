#include<stdio.h>
#include<conio.h>
void greet(int a);
void main(){
    int n;
    n=9;
    greet(n);
    getch();
}

void greet(int a){
    printf("Welcome to %dth program",a);
}
